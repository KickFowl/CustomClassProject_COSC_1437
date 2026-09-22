#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

#include "screenManager.h"


int main()
{

	
    ScreenManager mainScreen;

    while (true)
    {
        mainScreen.swapBuffers();

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            break;
        }
    }


	return 0;
}