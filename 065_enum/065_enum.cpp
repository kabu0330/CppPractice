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

	//JOBCLASS Player1 = FIGHTER; // error


	JOB      Player0 = FIGHTER;
	bool bResult = false;
	if (1 == Player0)
	{
		bResult = true;
	}
	bResult;

	JOBCLASS Player1 = JOBCLASS::FIGHTER;
	bool bResult1 = false;
	if (static_cast<JOBCLASS>(1) == Player1)
	{
		bResult1 = true;
	}

	bResult1;

	return 0;
}


