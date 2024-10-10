#include "World.h"
#include <BaseSystem/EngineFile.h>
#include "Player.h"
#include <conio.h>
#include "Town.h"
#include "FightZone.h"

void UWorld::PlayerNameSelect(UPlayer& _Player)
{
	char InputName[100] = {};

	bool IsNameInput = true;

	while (true)
	{
		if (true == IsNameInput)
		{
			system("cls");
			std::cout << "�̸��� �����ּ���." << std::endl;
			std::cin >> InputName;
		}

		system("cls");
		printf_s("����� �̸��� %s �Դϴ�. �����Ͻðڽ��ϱ�?\n", InputName);
		printf_s("a. ���� \n");
		printf_s("b. �ٽ� �Է� \n");

		int Select = _getch();
		bool IsEnd = true;
		switch (Select)
		{
		case 'a':
		case 'A':
			IsEnd = true;
			break;
		case 'b':
		case 'B':
			IsEnd = false;
			IsNameInput = true;
			break;
		default:
			IsEnd = false;
			IsNameInput = false;
			printf_s("�߸��� �����Դϴ�. �ٽ� �Է����ּ���. \n");
			//_getch();
			break;
		}

		if (true == IsEnd)
		{
			break;
		}
	}
	// ���� ����
	_Player.SetName(InputName);
}

void UWorld::PlayerZonePlay(UPlayer& _Player)
{
	ZoneInit();
	

}

void UWorld::ZoneInit()
{
	UTown TownZone;
	TownZone.SetName("�ʺ�����");

	UFightZone FightZone;
	FightZone.SetName("�ʺ������");
}

void UWorld::InPlayer(UPlayer& _Player)
{
	UEngineFile File;
	File.SetPath("SaveFile.Dat");

	// ������ ���� ��
	if (false == File.IsExits())
	{
		File.FileOpen("wb");

		PlayerNameSelect(_Player);
		const char* Name = _Player.GetName();
		
		File.Write(Name, NAMELEN);
	}
	else
	{
		File.FileOpen("rb");

		char Arr[100] = {};
		File.Read(Arr, NAMELEN);
		_Player.SetName(Arr);
	}

	PlayerZonePlay(_Player);
}



