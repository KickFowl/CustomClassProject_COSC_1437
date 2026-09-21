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

	std::vector<char> generateBuffers(int x, int y);

public:

	ScreenManager();
	ScreenManager(int x, int y);

	void setScreenSize();
	void setBufferSize();
	void setBufferSize(widthHeight);

	void drawToBuffer(screenObject item);
	void drawToBuffer(screenObject item, int startX, int startY);

	void swapBuffers();

	~ScreenManager();
};

