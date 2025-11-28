// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include <thread>

DWORD WINAPI LoadDllThread(LPVOID lpParam) {
    HMODULE hMod = LoadLibraryA("Dreadnought.dll");
    return 0;
}
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD ul_reason_for_call,
    LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(NULL, 0, LoadDllThread, NULL, 0, NULL);
    }
    return TRUE;
}

__declspec (dllexport) extern "C" void WerReportAddFile() {

}

__declspec (dllexport) extern "C" void WerReportSubmit() {

}

__declspec (dllexport) extern "C" void WerReportSetParameter() {

}

__declspec (dllexport) extern "C" void WerReportCreate() {

}