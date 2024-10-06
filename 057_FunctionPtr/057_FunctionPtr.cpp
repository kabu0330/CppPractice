#include <iostream>

class Button
{
public:
	void SetClickFunc(void(*_FunctionPtr)())
	{
		FunctionPtr = _FunctionPtr;
	}
private:
	void(*FunctionPtr)() = nullptr;
};

void PlayerAttack()
{
	std::cout << "플레이어가 공격합니다." << std::endl;
}

void MonsterSummon()
{
	std::cout << "몬스터가 소환됩니다." << std::endl;
}

int main()
{
	Button AttackButton;
	Button SummonButton;


	AttackButton.SetClickFunc(PlayerAttack);
	SummonButton.SetClickFunc(MonsterSummon);

	return 0;
}

