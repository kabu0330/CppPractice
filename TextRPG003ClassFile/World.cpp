#include "World.h"
#include "FightZone.h"
#include "Town.h"
#include <conio.h>
#include "Player.h"


void UWorld::InPlayer(class UPlayer& _Player)
{
	char InputName[100] = {0,};

	while (true)
	{
		system("cls");

		std::cout << "�̸��� �����ּ���" << std::endl;
		std::cin >> InputName;
		bool IsEnd = false;
		bool bSelect = false;
		while (!bSelect)
		{
			printf_s("����� �̸��� %s�Դϴ�. �����Ͻðڽ��ϱ�?\n", InputName);
			printf_s("a. ����\n");
			printf_s("b. ���Է�\n");
			int Select = _getch();
			switch (Select)
			{
			case 'a':
			case 'A':
				_Player.SetName(InputName);
				IsEnd = true;
				bSelect = true;
				break;
			case 'b':
			case 'B':
				IsEnd = false;
				bSelect = true;
				break;
			default:
				printf_s("�߸��� Ű�� �Է��ϼ̽��ϴ�.\n");
				_getch();
				system("cls");
				break;
			}
		}
		if (true == IsEnd)
		{
			break;
		}
		
	}

	// �������ʱ��� ���⼭ �� ������� ����
	// ������ ������ FightZone�� ��� �ȴ�.
	// ���� ��� �������� 
	
	// new�� �� ����� �ϴ°ų�?
	// 8�Ⱑ
	UTown TownZone;
	TownZone.SetName("�ʺ�����");

	// 10�Ⱑ
	UFightZone FightZone;
	FightZone.SetName("�ʺ������");

	while (true)
	{
		TownZone.InPlayer(_Player);
	}



}