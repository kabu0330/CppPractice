#pragma once
#include <iostream>
#include "EngineConst.h"
#include <BaseSystem/EngineDebug.h>

class UObject
{
public:
	inline const char* GetName()
	{
		return Name;
	}

	void SetName(const char* const _Name);

private:
	char Name[NAMELEN] = "NONE";
};

