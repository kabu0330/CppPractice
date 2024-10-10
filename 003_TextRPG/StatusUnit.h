#pragma once
#include "Object.h"

class UStatusUnit : public UObject
{
public:
	UStatusUnit();
	~UStatusUnit();

	int GetHp()
	{
		return Hp;
	}
	int GetAtt()
	{
		return Att;
	}
	int GetGold()
	{
		return Gold;
	}

	void SetHp  (int _Hp)
	{
		Hp = _Hp;
	}
	void SetAtt	(int _Att)
	{
		Att = _Att;
	}
	void SetGold(int _Gold)
	{
		Gold = _Gold;
	}

private:
	int Hp   = 0;
	int Att  = 0;
	int Gold = 0;
};


