#include <iostream>

enum JOB
{
	WORRIOR, // 전사
	FIGHTER, // 무도가
	MAGICIAN // 마법사
};

enum class JOBCLASS
{
	WORRIOR, // 전사
	FIGHTER, // 무도가
	MAGICIAN // 마법사
};

void JobChange(JOB _Player, int _Value)
{
	 _Player = static_cast<JOB>(_Value);
}


int main()
{
	JOB      Player0 = FIGHTER;

	JOBCLASS Player1 = JOBCLASS::FIGHTER;
	//JOBCLASS Player1 = FIGHTER; // error


	bool bResult = false;
	if (1 == Player0)
	{
		bResult = true;
	}

	bResult;
	return 0;
}


