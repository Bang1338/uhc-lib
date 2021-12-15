#include <windows.h>

int main() {

    ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0); //Hide console window
    LPCWSTR hypercam = L"Unregistered HyperCam 2";

    while (true) {
        HDC handle = GetDC(NULL);
        SetBkColor(handle, RGB(255, 255, 255));
        SetTextColor(handle, RGB(0, 0, 0));
        TextOut(handle, 0, 0, hypercam, wcslen(hypercam));
        ReleaseDC(NULL, handle);

        if (GetAsyncKeyState(VK_ESCAPE)) break; //Press ESC to exit.
        //Sleep(10);
    }
    return 0;
}
