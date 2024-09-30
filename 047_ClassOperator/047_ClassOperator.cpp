#include <iostream>

class Player
{
public:
	int operator+(const Player& _Value)
	{
		return 0;
	}

private:
	int Hp;
};

int main()
{
	int Ten = 10;
	int Twenty = 20;
	Player Warrior = Player();
	Player Magician = Player();

	int Plus = Ten + Twenty;
	int ClassPlus = Warrior + Magician;

	Warrior = Magician;

	
	return 0;
}

