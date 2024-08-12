#include <iostream>
#include <Windows.h>

void click()
{
    POINT cursorpos;
    GetCursorPos(&cursorpos);
    mouse_event(MOUSEEVENTF_LEFTUP, cursorpos.x, cursorpos.y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN, cursorpos.x, cursorpos.y, 0, 0);
}

int main()
{
    std::cout << "Enter control for clicking...\n";
    while (true)
    {
        if (GetAsyncKeyState(VK_CONTROL))
        {
            Sleep(50);
            click(); // За каждый вызов функции - умирает 1 еврей
        }
    }
}