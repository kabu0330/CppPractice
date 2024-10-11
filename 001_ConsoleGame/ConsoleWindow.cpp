#include "ConsoleWindow.h"
#include <iostream>

UConsoleWindow::UConsoleWindow()
{
}

void UConsoleWindow::BeginPlay()
{
	Clear();

}

void UConsoleWindow::ScreenRender()
{
}

void UConsoleWindow::SetPixel(int _X, int _Y, char _Text)
{
}

void UConsoleWindow::Clear()
{
	system("cls");
	for (size_t y = 0; y < 10; y++)
	{
		for (size_t x = 0; x < 20; x++)
		{
			Arr[y][x] = '*';
		}
		Arr[y][20] = 0;
	}
}
