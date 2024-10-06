#include <iostream>
#include <io.h>

class Player
{

};

struct PlayerSaveData
{
public:
	char Name[100];
	int Hp;
	int Att;
	int Def;
	int FinalStage;
};

int main()
{
	PlayerSaveData PlayerData;

	// _access : 파일이 존재하면 0, 없으면 -1
	int Result = _access("SaveFile.txt", 00);

	// 파일이 없다면,
	if (0 != Result)
	{
		// 쓰기 전용으로 파일을 열고 데이터 값을 저장한다.
		FILE* SaveFile = nullptr;
		fopen_s(& SaveFile, "SaveFile.txt", "wb");

		strcpy_s(PlayerData.Name, "SavePlayer");
		PlayerData.Hp         = 1000;
		PlayerData.Att        =  300;
		PlayerData.Def        =  200;
		PlayerData.FinalStage =   10;

		fwrite(&PlayerData, sizeof(PlayerData), 1, SaveFile);

		// 파일 닫기
		fclose(SaveFile);
	}
	else // 파일이 존재하면
	{
		// 읽기 전용으로 파일을 열고 
		FILE* SaveFile = nullptr;
		fopen_s(&SaveFile, "SaveFile.txt", "rb");

		fread(&PlayerData, sizeof(PlayerData), 1, SaveFile);

		// 파일 닫기
		fclose(SaveFile);
	}

	

}

