#include <iostream>
#include <vector>

#pragma once

struct screenObject 
{
	std::string contents;
	int contentsWidth;
	int contentsHeight;
};

class ScreenManager
{
private:

	struct widthHeight
	{
		int x;
		int y;
	};

	widthHeight screenSize;

	std::vector<char> bufferOne;
	std::vector<char> bufferTwo;

    std::vector<char>* currentBuffer;
    std::vector<char>* hiddenBuffer;

	std::vector<char> generateBuffers();
    std::vector<char> generateBuffers(char fill);
    void printScreen();

public:

	ScreenManager();
	ScreenManager(int x, int y);

	void setScreenSize();

	void drawToBuffer(screenObject item);
	void drawToBuffer(screenObject item, int startX, int startY);

	void swapBuffers();


	~ScreenManager();
};

