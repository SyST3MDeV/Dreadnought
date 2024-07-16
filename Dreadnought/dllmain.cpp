#include "includes.h"
#include "SDK.h"
#include "imgui_stdlib.h"
#include "kiero/minhook/include/MinHook.h"

#include <fstream>
#include <string>
#include <thread>

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
	Unreal Engine uses it's own allocator, which will crash when attempting to deallocate memory that dosen't belong to it. Instead of using "new" in our code, we need to
	use the native Unreal Engine allocator, which this function calls.
*/
void* FMemoryMalloc(size_t size) {
	//0C06B70
	return reinterpret_cast<void * (*)(size_t size, uint32_t alignment)>(global_baseaddress + 0x0C06B70)(size, 0);
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

static bool flipTeams = false;

bool interceptPostLogin = false;

bool procMapLoad = false;

std::string mapCommand = "";

bool connectToServer = false;

std::string serverIP = "";

bool launchTutorial = false;

bool forceHUD = false;

std::string loadoutString = "";

/*
	Loads the provided loadout class to memory
*/
void LoadLoadouts() {
	std::wstring wLoadoutString(loadoutString.begin(), loadoutString.end());

	StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, wLoadoutString.c_str());
}

/*
	Load the sepcified loadout for singleplayer, and force starts the match
*/
void CompleteSingleplayerMatchSetup(std::string loadoutString) {
	AYPlayerController* pc = (AYPlayerController*)((*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);

	std::wstring wLoadoutString(loadoutString.begin(), loadoutString.end());

	StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, wLoadoutString.c_str());

	UYShipLoadout* loadoutToApply = nullptr;

	for (UYShipLoadout* cmpLoadout : UObject::FindObjects< UYShipLoadout>()) {
		if (cmpLoadout->GetFullName().find(loadoutString.substr(loadoutString.find_last_of("/") + 1)) != std::string::npos) {
			loadoutToApply = cmpLoadout;
		}
	}

	pc->GetLoadoutManager()->m_activeLoadout = loadoutToApply;
	((AYPlayerController*)pc)->AddAndActiveLoadoutFromBlueprint(loadoutToApply->Class);

	((AYGameState*)(*UWorld::GWorld)->AuthorityGameMode->GameState)->SetRemainingTime(1);
}

static std::string singleplayerLoadoutString = "/Game/Generic/Loadouts/Precast/T5/VH_AssaultLight_PrecastLoadout_T5_BP";

/*
	Sets up singleplayer AI, requires about 30sec of built in delay to ensure all AI pawns spawn
*/
void SetupSingleplayerAIThread(int numBotsTeamOne, int numBotsTeamTwo, int difficulty, std::string loadoutString) {
	Sleep(20 * 1000);

	switch (difficulty) {
	case 0:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Rec");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_RECRUIT;
		}
		break;
	case 1:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Vet");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_VETERAN;
		}
		break;
	case 2:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Leg");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_LEGENDARY;
		}
		break;
	default:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Leg");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_LEGENDARY;
		}
		break;
	}

	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_NPCSet = getLastOfType< UYNPCPawnData>();
	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_isNPCSetLoaded = true;

	UYNPCPawnData* pawnData = getLastOfType< UYNPCPawnData>();

	for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers.Count(); i++) {
		TArray<FName>* shipIDs = (TArray<FName>*)FMemoryMalloc(sizeof(TArray<FName>));

		shipIDs->_data = (FName*)FMemoryMalloc(sizeof(FName) * pawnData->m_PawnsData.Count());
		shipIDs->_count = pawnData->m_PawnsData.Count();
		shipIDs->_max = pawnData->m_PawnsData.Count();

		for (int j = 0; j < pawnData->m_PawnsData.Count(); j++) {
			(*shipIDs)[j] = pawnData->m_PawnsData[j].m_shipId;
		}

		((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers[i].m_npcSpawnIDs = *shipIDs;
	}

	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM1, numBotsTeamOne);
	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM2, numBotsTeamTwo);

	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_enableSpawnAI = true;

	Sleep(30 * 1000);

	CompleteSingleplayerMatchSetup(loadoutString);
}

/*
	Sets up multiplayer AI, requires about 30sec of built in delay to ensure all AI pawns spawn
*/
void SetupMultiplayerAI(int numBotsTeamOne, int numBotsTeamTwo, int difficulty) {
	switch (difficulty) {
	case 0:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Rec");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_RECRUIT;
		}
		break;
	case 1:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Vet");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_VETERAN;
		}
		break;
	case 2:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Leg");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_LEGENDARY;
		}
		break;
	default:
		StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Leg");
		for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
			((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_LEGENDARY;
		}
		break;
	}

	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_NPCSet = getLastOfType< UYNPCPawnData>();
	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_isNPCSetLoaded = true;

	UYNPCPawnData* pawnData = getLastOfType< UYNPCPawnData>();

	for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers.Count(); i++) {
		TArray<FName>* shipIDs = (TArray<FName>*)FMemoryMalloc(sizeof(TArray<FName>));

		shipIDs->_data = (FName*)FMemoryMalloc(sizeof(FName) * pawnData->m_PawnsData.Count());
		shipIDs->_count = pawnData->m_PawnsData.Count();
		shipIDs->_max = pawnData->m_PawnsData.Count();

		for (int j = 0; j < pawnData->m_PawnsData.Count(); j++) {
			(*shipIDs)[j] = pawnData->m_PawnsData[j].m_shipId;
		}

		((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers[i].m_npcSpawnIDs = *shipIDs;
	}

	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM1, numBotsTeamOne);
	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM2, numBotsTeamTwo);

	((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_enableSpawnAI = true;

	Sleep(30 * 1000);
}

int numPlayersConnected = 0;

std::vector<AYPlayerController*> spawnedPlayerControllers = std::vector<AYPlayerController*>();

static int numBotsTeamOne = 0;
static int numBotsTeamTwo = 0;
static int difficulty = 0;
static int map = 0;

bool launchSingleplayer = false;

/*
	Delays the singleplayer setup thread so the map has time to load in
*/
void DelaySingleplayerSetupThread(std::string loadoutString) {
	Sleep(20 * 1000);

	CompleteSingleplayerMatchSetup(loadoutString);
}

/*
	ProcessEvent is the function that UFunctions pass through to be executed.
	This hook serves two purposes:
		- React to game events
		- Execute code in the main game thread
*/
void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
#ifdef SERVER_BUILD
	if (interceptPostLogin && function->GetFullName().find("PostLogin") != std::string::npos) { //Kick off the player controller init sequence
		AGameMode_K2_PostLogin_Params* cast_params = ((AGameMode_K2_PostLogin_Params*)params);

		AYPlayerController* pc = (AYPlayerController*)cast_params->NewPlayer;

		void* ret = origProcessEvent(object, function, params);

		if (!flipTeams) { //Set every player to the opposite team so our matches are something resembling balanced!
			pc->SetTeam(EYTeam::YT_TEAM2);
		}
		else {
			pc->SetTeam(EYTeam::YT_TEAM1);
		}

		flipTeams = !flipTeams;

		std::wstring wLoadoutString(loadoutString.begin(), loadoutString.end());

		StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, wLoadoutString.c_str());

		UYShipLoadout* loadoutToApply = nullptr;

		for (UYShipLoadout* cmpLoadout : UObject::FindObjects< UYShipLoadout>()) {
			if (cmpLoadout->GetFullName().find(loadoutString.substr(loadoutString.find_last_of("/") + 1)) != std::string::npos) {
				loadoutToApply = cmpLoadout;
			}
		}

		pc->GetLoadoutManager()->m_activeLoadout = loadoutToApply;
		((AYPlayerController*)pc)->AddAndActiveLoadoutFromBlueprint(loadoutToApply->Class); //This might not do anything outside of Standalone, TODO: check this in the future

		pc->ServerRestartPlayer();
		
		return ret;
	}

	if (procMapLoad) { //Load the map on the server, needs to run in the main game thread
		procMapLoad = false;

		std::wstring wMapCommand(mapCommand.begin(), mapCommand.end());

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), wMapCommand.c_str(), (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}

	//In Listen play, calling ClientSetPlayerRestrictions on the local player will result in a stack overflow
	if (function->GetFullName().find("ClientSetPlayerRestrictions") != std::string::npos && object == (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController) {
		return nullptr;
	}
	//Hacky way to force the HUD and disabled features into ingame mode
	/*
	else if (function->GetFullName().find("ClientSetPlayerRestrictions") != std::string::npos) {
		AYPlayerController_ClientSetPlayerRestrictions_Params* parsedParams = (AYPlayerController_ClientSetPlayerRestrictions_Params*)params;

		parsedParams->bRestrictAbilities = false;
		parsedParams->hudState = EYHudState::EHS_HUD;
		parsedParams->bRestrictChat = false;
		parsedParams->bRestrictEnergyWheel = false;
		parsedParams->bRestrictMovements = false;
		parsedParams->bRestrictOfficerNotifications = false;
		parsedParams->bRestrictScoringSystem = false;
		parsedParams->bRestrictSwitchWeapons = false;
		parsedParams->bRestrictWeapons = false;
		parsedParams->bSpectate = false;
		parsedParams->restrictAbility1 = false;
		parsedParams->restrictAbility2 = false;
		parsedParams->restrictAbility3 = false;
		parsedParams->restrictAbility4 = false;
		parsedParams->restrictCamera = EYCameraRestrictionType::EYCRT_AllowCamera;
		parsedParams->restrictShortCommands = false;
		parsedParams->specificMovementRestrictions = FYSpecificMovementControlRestrictions();
	}
	*/
#endif

#ifndef SERVER_BUILD
	if (connectToServer) { //Connect to the server, needs to run in the main game thread
		connectToServer = false;

		forceHUD = true;

		std::wstring wServerIP(serverIP.begin(), serverIP.end());

		std::wstring wServerConnectCommand = L"open ";

		std::wstring wFinalCommand = wServerConnectCommand.append(wServerIP);

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), wFinalCommand.c_str(), (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}

	if (launchTutorial) { //Launch the tutorial, needs to run in the main game thread
		launchTutorial = false;

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), L"open S01E00_00_Tutorial_P", (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}

	if (launchSingleplayer) {
		launchSingleplayer = false;

		std::wstring mapFileNames [10] = { L"MP_Amirani_P", L"MP_DansMap_P", L"MP_Derelict_P", L"MP_Glacier_P", L"MP_Gorge_P", L"MP_Highlands_P", L"MP_Paradise_P", L"MP_Skybridge_P", L"MP_Space01_P", L"MP_Space02_P" };

		std::wstring command = L"open ";

		command = command.append(mapFileNames[map].c_str());

		getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), command.c_str(), (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);

		if (numBotsTeamOne > 0 || numBotsTeamTwo > 0) {
			std::thread t(SetupSingleplayerAIThread, numBotsTeamOne, numBotsTeamTwo, difficulty, singleplayerLoadoutString);

			t.detach();
		}
		else {
			std::thread t(DelaySingleplayerSetupThread, singleplayerLoadoutString);

			t.detach();
		}
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
	interceptPostLogin = true;
}

/*
	Iterate through all playercontrollers, and spam restart thier feat component. OnPlayerRespawned does nothing if the player is already spawned, so this is safe to call without
	checking if the player is dead or not.
*/
void RespawnThread() {
	while (true) {
		if ((*UWorld::GWorld)->NetDriver) {
			for (int i = 0; i < (*UWorld::GWorld)->NetDriver->ClientConnections.Count(); i++) {
				AYPlayerController* pc = (AYPlayerController*)(*UWorld::GWorld)->NetDriver->ClientConnections[i]->PlayerController;

				if (pc) {
					pc->ServerRestartPlayer();
				}

				if (pc && pc->Pawn && ((AYPawn*)pc->Pawn)->m_featsComponent) {
					((AYPawn*)pc->Pawn)->m_featsComponent->OnPlayerRespawned(pc);
				}
			}
			Sleep(5 * 1000);
		}
	}
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

		if (ImGui::BeginTabBar("MenuSelect")) {
			if (ImGui::BeginTabItem("Singleplayer")) {
				const char* difficultyNames[3] = { "Recruit", "Veteran", "Legendary" };

				const char* mapNames[10] = { "Amirani", "DansMap", "Derelict", "Glacier", "Gorge", "Highlands", "Paradise", "Skybridge", "Space01", "Space02"};

				ImGui::SliderInt("Num Friendly Bots", &numBotsTeamOne, 0, 7);
				ImGui::SliderInt("Num Enemy Bots", &numBotsTeamTwo, 0, 8);
				ImGui::Combo("Bot Difficulty", &difficulty, difficultyNames, 3);
				ImGui::Combo("Map", &map, mapNames, 10);
				ImGui::InputText("Loadout Path", &singleplayerLoadoutString);

				if (ImGui::Button("Launch Singleplayer")) {
					launchSingleplayer = true;
				}

				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Tutorial")) {
				if (ImGui::Button("Launch Tutorial"))
					launchTutorial = true;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Multiplayer (BETA)")) {
				ImGui::InputText("Server IP", &serverIP);
				ImGui::SameLine();

				if (ImGui::Button("Connect"))
					connectToServer = true;
				ImGui::EndTabItem();
			}
			/*
			if (ImGui::BeginTabItem("Debug")) {
				if (ImGui::Button("Buffs Manager")) {
					AYPlayerController* pc = (AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController;

					std::cout << ((AYPawn*)pc->Pawn)->m_buffsComponent << std::endl;
				}
				if (ImGui::Button("Force Loadout")) {
					AYPlayerController* pc = (AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController;

					StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, L"/Game/Generic/Loadouts/Precast/T5/VH_SniperLight_T5_PrecastLoadout_BP");

					UYShipLoadout* loadoutToApply = nullptr;

					for (UYShipLoadout* cmpLoadout : UObject::FindObjects< UYShipLoadout>()) {
						if (cmpLoadout->GetFullName().find("Sniper") != std::string::npos) {
							loadoutToApply = cmpLoadout;
						}
					}

					((AYPlayerController*)pc)->AddAndActiveLoadoutFromBlueprint(loadoutToApply->Class);
				}

				if (ImGui::Button("Enable AI Spawn")) {
					((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_enableSpawnAI = true;
				}

				if (ImGui::Button("Disable AI Spawn")) {
					((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_enableSpawnAI = false;
				}

				if (ImGui::Button("Load Loadout")) {
					StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, L"/Game/Generic/Loadouts/Precast/T5/VH_AssaultLight_PrecastLoadout_T5_BP");
				}

				if (ImGui::Button("InstaStartMatch")) {
					((AYGameState*)(*UWorld::GWorld)->AuthorityGameMode->GameState)->SetRemainingTime(1);
				}

				if (ImGui::Button("Listen")) {
					Listen();
				}

				if (ImGui::Button("RestartAllPlayers")) {
					StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, L"/Game/Generic/Loadouts/Precast/T5/VH_AssaultLight_PrecastLoadout_T5_BP");

					for (AYPlayerController* pc : UObject::FindObjects<AYPlayerController>()) {
						if (pc->GetFullName().find("Default") == std::string::npos) { // && pc != (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController
							if (!pc->GetLoadoutManager()->m_activeLoadout) {
								UYShipLoadout* loadoutToApply = nullptr;

								for (UYShipLoadout* cmpLoadout : UObject::FindObjects< UYShipLoadout>()) {
									if (cmpLoadout->GetFullName().find("VH_AssaultLight_PrecastLoadout_T5_BP") != std::string::npos) {
										loadoutToApply = cmpLoadout;
									}
								}

								pc->GetLoadoutManager()->m_activeLoadout = loadoutToApply;
								pc->AddAndActiveLoadoutFromBlueprint(loadoutToApply->Class);
							}
							pc->ServerRestartPlayer();
						}
					}
				}

				if (ImGui::Button("AI Team")) {
					StaticLoadClass(UYNPCPawnData::StaticClass(), nullptr, L"/Game/Generic/GameModes/TDM/AIShips_TDM_Vet");

					Sleep(1 * 1000);

					ListAllObjectsOfType< UYNPCPawnData>();

					((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_NPCSet = getLastOfType< UYNPCPawnData>();
					((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetCombatManager()->m_isNPCSetLoaded = true;

					UYNPCPawnData* pawnData = getLastOfType< UYNPCPawnData>();

					for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers.Count(); i++) {
						TArray<FName>* shipIDs = (TArray<FName>*)FMemoryMalloc(sizeof(TArray<FName>));

						shipIDs->_data = (FName*)FMemoryMalloc(sizeof(FName) * pawnData->m_PawnsData.Count());
						shipIDs->_count = pawnData->m_PawnsData.Count();
						shipIDs->_max = pawnData->m_PawnsData.Count();

						for (int j = 0; j < pawnData->m_PawnsData.Count(); j++) {
							(*shipIDs)[j] = pawnData->m_PawnsData[j].m_shipId;
						}

						((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_npcPlayers[i].m_npcSpawnIDs = *shipIDs;
					}

					for (int i = 0; i < ((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules.Count(); i++) {
						((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->m_aiSpawnTierRules[i].m_aiTier_aiDificultyLevel = EYAILevel::YAIL_LEGENDARY;
					}

					((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM1, 6);
					((AYGameMode_Multiplayer*)(*UWorld::GWorld)->AuthorityGameMode)->SetTeamSizeAI(EYTeam::YT_TEAM2, 6);
				}
				ImGui::EndTabItem();
			}
			*/
			ImGui::EndTabBar();
		}

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
	This stub function prevents the hud from being created on the listen player. Without this, the server will crash on any player's death.
*/
void* origJustReturn = nullptr;

void* JustReturnWhatWeWereGoingToReturn(void* param1, void* param2) {
	return nullptr;
}

//1CDB7C0

//036B2E0

void* origEndMatch = nullptr;

/*
	This stub function prevents the match from ending, as it would normally end when any player disconnects
*/
void EndMatchHook(void* param1) {
	return;
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

#ifdef SERVER_BUILD
	void* hookRef2 = (void*)(global_baseaddress + 0x055B050);

	MH_CreateHook(hookRef2, JustReturnWhatWeWereGoingToReturn, reinterpret_cast<LPVOID*>(&origJustReturn));

	MH_EnableHook(hookRef2);

	void* hookRef3 = (void*)(global_baseaddress + 0x036B2E0);

	MH_CreateHook(hookRef3, EndMatchHook, reinterpret_cast<LPVOID*>(&origEndMatch));

	MH_EnableHook(hookRef3);
#endif // !SERVER_BUILD

	
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

int serverNumBotsTeamOne = 0;
int serverNumBotsTeamTwo = 0;
int serverBotDifficulty = 0;

/*
	Loads server configuration from cfg.txt in the Win64 folder
*/
void LoadConfiguration() {
	std::ifstream cfgFile("cfg.txt");

	std::getline(cfgFile, mapCommand);
	std::getline(cfgFile, loadoutString);

	std::string procLine;

	std::getline(cfgFile, procLine);

	serverNumBotsTeamOne = std::stoi(procLine);

	procLine = "";

	std::getline(cfgFile, procLine);

	serverNumBotsTeamTwo = std::stoi(procLine);

	procLine = "";

	std::getline(cfgFile, procLine);

	serverBotDifficulty = std::stoi(procLine);

	procLine = "";
}

/*
*	Sets the loadout of the local player, allowing them to spawn when the game starts
*/
void ForceSpawnLocalPlayer() {
	std::wstring wLoadoutString(loadoutString.begin(), loadoutString.end());

	StaticLoadClass(UYShipLoadout::StaticClass(), nullptr, wLoadoutString.c_str());

	Sleep(2 * 1000);

	UYShipLoadout* loadoutToApply = getLastOfType< UYShipLoadout>();

	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->GetLoadoutManager()->m_activeLoadout = loadoutToApply;
	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->AddAndActiveLoadoutFromBlueprint(loadoutToApply->Class);
}

/*
	Skips the loadout selection part of the match
*/
void ForceStartMatch() {
	((AYGameState*)(*UWorld::GWorld)->AuthorityGameMode->GameState)->SetRemainingTime(1);
}

/*
	When running in listen mode, only players that are actively being rendered by the server are able to play. This code forces the local listen player
	to view a new camera above the map, and extends the render distance to ensure that all players are always rendered.
*/
void InitDesyncFix() {
	for (auto actor : UObject::FindObjects<URendererSettings>()) {
		actor->bOcclusionCulling = false;
	}

	ListAllObjectsOfType<ACameraActor>();

	FViewTargetTransitionParams params = FViewTargetTransitionParams();

	params.BlendTime = 0.0f;

	FTransform spawnTransform = FTransform();

	spawnTransform.Translation = FVector(0, 0, 999999.0f);
	spawnTransform.Rotation = FQuat();
	spawnTransform.Rotation.X = 0;
	spawnTransform.Rotation.W = -0.7071068;
	spawnTransform.Rotation.Y = -0.7071068f;
	spawnTransform.Rotation.Z = 0;

	ACameraActor* newCam = (ACameraActor*)getLastOfType<UGameplayStatics>()->STATIC_BeginSpawningActorFromClass((*UWorld::GWorld), ACameraActor::StaticClass(), spawnTransform, true, nullptr);

	ListAllObjectsOfType<ACameraActor>();

	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->ClientSetViewTarget(newCam, params);

	getLastOfType<UKismetSystemLibrary>()->STATIC_ExecuteConsoleCommand((*UWorld::GWorld), L"r.SkipVehicleUpdateDistance 999999999999999999999999", (*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);

	FVector farAway = FVector();

	farAway.X = 0;
	farAway.Y = 0;
	farAway.Z = 999999.0f;

	((AYPlayerController*)(*UWorld::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->Pawn->K2_TeleportTo(farAway, FRotator());
}

/*
	Starts up the respawn thread
*/
void InitRespawnThread() {
	std::thread t(RespawnThread);

	t.detach();
}

/*
	Runs server buisness logic
*/
void ServerStartCallbacks() {
	LoadConfiguration();

	procMapLoad = true;

	Sleep(20 * 1000);

	if (serverNumBotsTeamOne > 0 || serverNumBotsTeamTwo > 0) {
		SetupMultiplayerAI(serverNumBotsTeamOne, serverNumBotsTeamTwo, serverBotDifficulty);
	}

	ForceSpawnLocalPlayer();

	ForceStartMatch();

	Sleep(15 * 1000);

	InitDesyncFix();

	Listen();

	InitRespawnThread();
}

/*
	Main thread, runs common init logic, then runs server or client buisness logic
*/
DWORD WINAPI DreadnoughtMainThread(LPVOID lpReserved)
{
	InitSdk();

	InitHooking();

	InitConsole();

	InitGameConsole();

#ifdef SERVER_BUILD
	ServerStartCallbacks();
#endif // SERVER_BUILD

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