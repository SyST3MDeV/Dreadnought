#include "includes.h"
#include "SDK.h"
#include "imgui_stdlib.h"
#include "kiero/minhook/include/MinHook.h"

#include <fstream>
#include <string>

using namespace CG;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

uintptr_t global_baseaddress = 0;


/*
	Iterates over the global objects array, and finds the final object of the given type
*/
template<typename T>
T* getLastOfType() {
	return UObject::FindObjects<T>().back();
}

/*
	DEBUGGING ONLY: Iterates over the global objects array, and lists all objects of the provided type.
*/
template<typename T>
void ListAllObjectsOfType() {
	for (T* obj : UObject::FindObjects<T>()) {
		std::cout << obj->GetFullName() << std::endl;
	}
}

/*
	Equivalent to StaticLoad<T> in UE4, used to load ship loadout BPs
*/
UObject* StaticLoadClass(UClass* ObjectClass, UObject* InOuter, const TCHAR* InName) {
	//UClass* ObjectClass, UObject* InOuter, const TCHAR* InName, const TCHAR* Filename, uint32 LoadFlags, UPackageMap* Sandbox, bool bAllowObjectReconciliation 
	//0D78110
	return reinterpret_cast<UObject* (*)(UClass * ObjectClass, UObject * InOuter, const TCHAR * InName, const TCHAR * Filename, int LoadFlags, UPackageMap * Sandbox, bool bAllowObjectReconciliation)>(global_baseaddress + 0x0D78110)(ObjectClass, InOuter, InName, nullptr, 0, nullptr, false);
}


/*
	Startup IMGUI
*/
void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

typedef void* (__thiscall* ProcessEvent)(UObject*, class UFunction*, void*);

ProcessEvent origProcessEvent = nullptr;

bool flipTeams = false;

bool iAmServer = false;

bool procMapLoad = false;

std::string mapCommand = "";

bool connectToServer = false;

std::string serverIP = "";

bool launchTutorial = false;

/*
	ProcessEvent is the function that UFunctions pass through to be executed.
	This hook serves two purposes:
		- React to game events
		- Execute code in the main game thread
*/
void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
#ifdef SERVER_BUILD
	if (iAmServer && function->GetFullName().find("PostLogin") != std::string::npos) { //A new player has connected, set their loadout!
		AGameMode_K2_PostLogin_Params* cast_params = ((AGameMode_K2_PostLogin_Params*)params);

		UYShipLoadoutHero* loadoutToApply = getLastOfType< UYShipLoadoutHero>();

		((AYPlayerController*)cast_params->NewPlayer)->GetLoadoutManager()->m_activeLoadout = loadoutToApply;

		if (!flipTeams) {
			((AYPlayerController*)cast_params->NewPlayer)->SetTeam(EYTeam::YT_TEAM2);
		}
		else {
			((AYPlayerController*)cast_params->NewPlayer)->SetTeam(EYTeam::YT_TEAM1);
		}
		
		flipTeams = !flipTeams;

		((AYPlayerController*)cast_params->NewPlayer)->ServerRestartPlayer();
	}

	if (procMapLoad) { //Load the map on the server, needs to run in the main game thread
		procMapLoad = false;

		std::wstring wMapCommand(mapCommand.begin(), mapCommand.end());

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), wMapCommand.c_str(), (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}
#endif

#ifndef SERVER_BUILD
	if (connectToServer) { //Connect to the server, needs to run in the main game thread
		connectToServer = false;

		std::wstring wServerIP(mapCommand.begin(), mapCommand.end());

		std::wstring wServerConnectCommand = L"open ";

		std::wstring wFinalCommand = wServerIP + wServerConnectCommand;

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), wFinalCommand.c_str(), (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}

	if (launchTutorial) { //Launch the tutorial, needs to run in the main game thread
		launchTutorial = false;

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), L"open S01E00_00_Tutorial_P", (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}
#endif // !SERVER_BUILD


	return origProcessEvent(object, function, params);
}

/*
	Tells UE4 to listen for incoming connections.
	- Why not just pass ?listen to the open command?
	- Glad you asked! Dreadnought checks for ?listen on the command line, and sets up the game differently, which results in clients not being able to spawn.
	  The only consistent way I've found to get clients to spawn properly is to setup the game in standalone mode, THEN manually call the listen function
*/
void Listen() {
	FURL url = FURL();
	url.Port = 7777;
	reinterpret_cast<UObject* (*)(UWorld * world, FURL & inURL)>(global_baseaddress + 0x1CDBB20)(*UWorld::GWorld, url);
	iAmServer = true;
}

bool init = false;
bool menuEnabled = true;

/*
	Hooks the DX11 Present function, used to draw our IMGUI menu onto the screen
*/
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	/*
		Main menu code begins here
	*/
	if (menuEnabled) {
		ImGui::Begin("Dreadnought (F1 to show/hide)", &menuEnabled, ImGuiWindowFlags_AlwaysAutoResize);

		ImGui::InputText("Server IP", &serverIP);
		ImGui::SameLine();

		if (ImGui::Button("Connect"))
			connectToServer = true;

		if (ImGui::Button("Launch Tutorial"))
			launchTutorial = true;

		ImGui::End();
	}
	/*
		Main menu code ends here
	*/
	
	ImGui::Render();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

bool menuToggledThisFrame = false;

typedef HRESULT(__stdcall* ResizeBuffers)(IDXGISwapChain* pThis, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
ResizeBuffers oResizeBuffers;

/*
	Hooks DX11's resize buffer function
	This is required to make the game not crash when the resolution is changed
*/
HRESULT hkResizeBuffers(IDXGISwapChain* pThis, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {
	if (mainRenderTargetView) {
		pContext->OMSetRenderTargets(0, 0, 0);
		mainRenderTargetView->Release();
	}

	HRESULT hr = oResizeBuffers(pThis, BufferCount, Width, Height, NewFormat, SwapChainFlags);

	ID3D11Texture2D* pBuffer;
	pThis->GetBuffer(0, __uuidof(ID3D11Texture2D),
		(void**)&pBuffer);

	pDevice->CreateRenderTargetView(pBuffer, NULL,
		&mainRenderTargetView);

	pBuffer->Release();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);

	// Set up the viewport.
	D3D11_VIEWPORT vp;
	vp.Width = Width;
	vp.Height = Height;
	vp.MinDepth = 0.0f;
	vp.MaxDepth = 1.0f;
	vp.TopLeftX = 0;
	vp.TopLeftY = 0;
	pContext->RSSetViewports(1, &vp);
	return hr;
}

/*
	Hook ProcessEvent and set the global base address variable
*/
void InitHooking() {
	uintptr_t base_address = (uintptr_t)GetModuleHandleA("DreadGame-Win64-Shipping.exe");

	global_baseaddress = base_address;

	MH_Initialize();

	ProcessEvent hookRef = (ProcessEvent)GetVFunction<void(*)(UObject*, class UFunction*, void*)>(UObject::StaticClass(), 0x35);

	MH_CreateHook(hookRef, ProcessEventHook, reinterpret_cast<LPVOID*>(&origProcessEvent));

	MH_EnableHook(hookRef);
}

/*
	DEBUG ONLY: Create the UE4 native game console (open with ~)
*/
void InitGameConsole() {
	UEngine* engine = getLastOfType<UGameEngine>();

	UObject* NewObject = getLastOfType<UGameplayStatics>()->STATIC_SpawnObject(engine->ConsoleClass, engine->GameViewport);

	engine->GameViewport->ViewportConsole = static_cast<UConsole*>(NewObject);
}

/*
	DEBUG ONLY: Allow us to use std::cout and have it output to the window opened when the game is launched with -log
*/
void InitConsole() {	
	FILE* fDummy;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
}

std::string loadoutString = "";

/*
	Loads the provided loadout class to memory
*/
void LoadLoadouts() {
	std::wstring wLoadoutString(loadoutString.begin(), loadoutString.end());

	StaticLoadClass(UYShipLoadoutHero::StaticClass(), nullptr, wLoadoutString.c_str());
}

/*
	Loads server configuration from cfg.txt in the Win64 folder
*/
void LoadConfiguration() {
	std::ifstream cfgFile("cfg.txt");

	std::getline(cfgFile, mapCommand);
	std::getline(cfgFile, loadoutString);
}

/*
	Runs server buisness logic
*/
void ServerStartCallbacks() {
	LoadConfiguration();

	LoadLoadouts();
	
	procMapLoad = true;

	Sleep(125000);

	Listen();
}

/*
	Main thread, runs common init logic, then runs server or client buisness logic
*/
DWORD WINAPI DreadnoughtMainThread(LPVOID lpReserved)
{
	InitSdk();

#ifdef SERVER_BUILD
	InitConsole();
#endif

	InitHooking();

#ifdef SERVER_BUILD
	ServerStartCallbacks();
#endif // SERVER_BUILD


#ifdef DEBUG
	InitGameConsole();
#endif

#ifndef SERVER_BUILD
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			kiero::bind(13, (void**)&oResizeBuffers, hkResizeBuffers);
			init_hook = true;
		}
	} while (!init_hook);

	while (true) {
		if (GetAsyncKeyState(VK_F1) && !menuToggledThisFrame) {
			menuToggledThisFrame = true;
			menuEnabled = !menuEnabled;
		}
		else if(!GetAsyncKeyState(VK_F1)){
			menuToggledThisFrame = false;
		}
	}
#endif
	return TRUE;
}

/*
	DllMain: Creates the main thread and bails ASAP
*/
BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, DreadnoughtMainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
#ifndef SERVER_BUILD
		kiero::shutdown();
#endif
		break;
	}
	return TRUE;
}