// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include <thread>

void DreadnoughtInjectionThread() {
    Sleep(25000);
    LoadLibraryA("Dreadnought.dll");
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(DreadnoughtInjectionThread);
        t.detach();
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