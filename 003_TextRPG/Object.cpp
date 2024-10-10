#include "Object.h"

void UObject::SetName(const char* const _Name)
{
	strcpy_s(Name, _Name);
}
