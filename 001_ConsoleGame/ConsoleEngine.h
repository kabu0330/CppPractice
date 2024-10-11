#pragma once
#include "ConsoleWindow.h"

class ConsoleEngine
{
public:
	static void Start();


private:
	ConsoleEngine();

	UConsoleWindow Window;

	void BeginPlay();

	void Tick();

	void Render();
};

