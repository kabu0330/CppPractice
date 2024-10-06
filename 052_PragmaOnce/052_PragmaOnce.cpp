#include <iostream>

namespace MonsterTeam
{
		void Create()
		{
			std::cout << "몬스터 팀에서 몬스터 생성합니다." << std::endl;
		}
}

namespace PlayerTeam
{
		void Create()
		{
			std::cout << "플레이어 팀에서 캐릭터 생성합니다." << std::endl;
		}
}

using namespace MonsterTeam;

int main()
{
	MonsterTeam::Create();
	::MonsterTeam::Create();
	Create();
	
	PlayerTeam::Create();

	char a = 0;
	char& aRef = a;
	int Size = sizeof(aRef);



	return 0;
}

