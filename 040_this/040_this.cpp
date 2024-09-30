#include <iostream>

class Player
{
public:
	Player()
	{
		this = nullptr;
	}

	Player(Player* const this, const int _Hp)
	{
		this->Hp = _Hp;
	}

private:
	int Hp;
};

int main()
{
	Player Warrior  = Player(&Warrior, 200);

	Player Magician = Player(&Magician, 80);

	Player Archer   = Player(&Archer,  120);

	Player Thief    = Player(&Thief,   100);

	return 0;
}

