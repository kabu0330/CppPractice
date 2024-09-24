#include <iostream>

int main()
{
	int Integer = true;

	int IntCast = (int)true;


	// C 스타일
	bool cValue = (bool)456789;


	// C++ 스타일 명시적 형변환

	int Value = static_cast<int>(true);

	bool bValue = static_cast<bool>(123456);
	int Result = (int)bValue;

	int* Ptr = &Value;

	__int64 Address0 = reinterpret_cast<__int64>(&Value);



	__int64 Address1 = reinterpret_cast<__int64>(&bValue);



	//__int64 Result = Address1 - Address0;



	return 0;
}