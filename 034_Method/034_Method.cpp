#include <iostream>

class Player
{
public:
	void /*Player::*/Create(/*Player* const this*/)
	{
		this;
	}

private:

};


class Monster
{
public:
	Monster()
	{
	}

	Monster(const int& _Hp)
		: Hp(_Hp)
	{
	}

private:
	int Hp = 0;
		
};

int main()
{
	Monster Ork;

	Monster Goblin = Monster(50);

	return 0;
}

