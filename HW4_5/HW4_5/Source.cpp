#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(handle, &consoleInfo);
    int height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top;
    int width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;

    auto GetX = [&](double x) { return int(x / 7 * width); };
    auto GetY = [&](double y) { return int((-y / 1 + 1) * (height / 2)); };

    _COORD c;
    for (double i = 0; i < 7; i += 0.03)
    {
        c.X = GetX(i);
        c.Y = GetY(sin(i));
        SetConsoleCursorPosition(handle, c);
        cout << '*';
    }

    cin.get();
    CloseHandle(handle);
}    