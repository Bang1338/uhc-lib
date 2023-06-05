#include "uhc.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}

DLL_EXPORT void HPCwtm(LPCSTR input_txt) {
    //ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0); //Hide console window, only SUBSYSTEM:CONSOLE
    LPCSTR hypercam = input_txt;

    // Create a new font
    HFONT hFont = CreateFont(20, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
                             DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                             CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
                             DEFAULT_PITCH | FF_DONTCARE, "System");

    // Create a named mutex
    HANDLE hMutex = CreateMutex(NULL, FALSE, "HPCwtmMutex");

    while (true) {
        // Check the state of the mutex
        DWORD dwWaitResult = WaitForSingleObject(hMutex, 0);
        if (dwWaitResult == WAIT_OBJECT_0 || dwWaitResult == WAIT_ABANDONED) {
            // Mutex is signaled, exit the loop
            ReleaseMutex(hMutex);
            break;
        }

        HDC handle = GetDC(NULL);

        // Select the new font into the device context
        SelectObject(handle, hFont);

        SetBkColor(handle, RGB(255, 255, 255));
        SetTextColor(handle, RGB(0, 0, 0));
        TextOut(handle, 0, 0, hypercam, strlen(hypercam));
        ReleaseDC(NULL, handle);
    }

    // Clean up the font object
    DeleteObject(hFont);

    // Close the mutex handle
    CloseHandle(hMutex);
}
