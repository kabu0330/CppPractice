#pragma once
#include "ConsoleImage.h"

class UConsoleWindow
{
public:
	UConsoleWindow();

	void BeginPlay();
	void ScreenRender();
	void SetPixel(int _X, int _Y, char _Text);
	void Clear();

private:
	int FrameDelay = 250;

	ConsoleImage BackBuffer;
};

