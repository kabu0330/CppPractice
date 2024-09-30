#include <iostream>

#include <assert.h>
#include <Windows.h>

int main()
{
	MessageBoxA(nullptr, "에러를 내고 싶었습니다.", "에러", MB_OK);
	assert(false);
}

