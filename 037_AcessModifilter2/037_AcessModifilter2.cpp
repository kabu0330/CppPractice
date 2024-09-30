#include <iostream>

class Player
{
public:
	Player()
	{
	}

	int GetHp() const
	{
		return Hp;
	}

	void SetHp(const int& _Hp)
	{
		Hp = _Hp;
	}

private:
	int Hp = 100;

};

int main()
{
	Player Warrior = Player();
	Warrior.GetHp();

	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(0); // 갑자기 플레이어 사망
	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(200);
	Warrior.SetHp(200);

	return 0;
}

