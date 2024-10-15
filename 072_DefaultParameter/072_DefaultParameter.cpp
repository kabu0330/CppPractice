#include <iostream>

void Monster(const char* const _Name, int Hp = 100, int Att = 10)
{

}

class Vector2
{
public:
	int X = 0;
	int Y = 0;
};

int main()
{
	Vector2 Position = { 10, 20 };

	int ResultX = Position.X;
	int ResultY = Position.Y;


	Monster("오크");

}
