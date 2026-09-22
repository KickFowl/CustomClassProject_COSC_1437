#include "ScreenManager.h"

std::vector<char> ScreenManager::generateBuffers()
{
    std::vector<char> tempBuffer;

    for (int i = 0; i < screenSize.y; i++)
    {
        for (int j = 0; j < screenSize.x; j++)
        {
            tempBuffer.push_back('#');
        }
        tempBuffer.push_back('\n');
    }

	return tempBuffer;
}

std::vector<char> ScreenManager::generateBuffers(char fill)
{
    std::vector<char> tempBuffer;

    for (int i = 0; i < screenSize.y; i++)
    {
        for (int j = 0; j < screenSize.x; j++)
        {
            tempBuffer.push_back(fill);
        }
        tempBuffer.push_back('\n');
    }

    return tempBuffer;
}

void ScreenManager::printScreen()
{
    std::system("cls");
    for (int i = 0; i < currentBuffer->size(); i++)
    {
        std::cout << currentBuffer->at(i);
    }
}

ScreenManager::ScreenManager() : screenSize(widthHeight(80, 20)), currentBuffer(&bufferOne)
{
    bufferOne = generateBuffers();
    bufferTwo = generateBuffers('$');
}

ScreenManager::ScreenManager(int x, int y)
{

}

void ScreenManager::setScreenSize()
{

}

void ScreenManager::drawToBuffer(screenObject item)
{

}

void ScreenManager::drawToBuffer(screenObject item, int startX, int startY)
{

}

void ScreenManager::swapBuffers()
{
    if (currentBuffer == &bufferOne)
    {
        currentBuffer = &bufferTwo;

        bufferOne = bufferTwo;

        hiddenBuffer = &bufferOne;
    }
    else 
    {
        currentBuffer = &bufferOne;

        bufferTwo = bufferOne;

        hiddenBuffer = &bufferTwo;
    }

    printScreen();
}

ScreenManager::~ScreenManager()
{

}
