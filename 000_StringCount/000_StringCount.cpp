
#include <iostream>

int StringCount(const char* const _Str)
{
	int Count = 0;

	while (_Str[Count])
	{
		Count++;
	}
	return Count;
}

int main()
{
	char Arr[10] = "ABCDE";

	int Count = StringCount(Arr);

	return 0;
}
