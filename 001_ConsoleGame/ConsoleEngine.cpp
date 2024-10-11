#include "ConsoleEngine.h"

void ConsoleEngine::Start()
{
	ConsoleEngine Engine;
	Engine.BeginPlay();

	while (true)
	{
		Engine.Tick();
		Engine.Render();
	}
}

ConsoleEngine::ConsoleEngine()
{
}

void ConsoleEngine::BeginPlay()
{
	
}

void ConsoleEngine::Tick()
{
}

void ConsoleEngine::Render()
{
}
