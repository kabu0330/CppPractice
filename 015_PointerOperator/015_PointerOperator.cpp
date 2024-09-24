#include <iostream>

unsigned __int64 Address(int* _Ptr)
{
	unsigned __int64 Address = reinterpret_cast<unsigned __int64>(_Ptr);

	int a = 0;
	return Address;
}

unsigned __int64 AddressSub(int* _Ptr0, int* _Ptr1)
{
	unsigned __int64 Address0 = reinterpret_cast<unsigned __int64>(_Ptr0);
	unsigned __int64 Address1 = reinterpret_cast<unsigned __int64>(_Ptr1);

	unsigned __int64 Result = Address1 - Address0;

	int a = 0;
	return Result;
}

void Test(int _Value0, int _Value1, int _Value2, int _Value3)
{
	// 1. 첫 번째 인자의 포인터만을 사용하여 2 ~ 4번째 인자의 값을 
	// TestValue 변수에 저장해라.
	// 조건 1. 인자를 직접 대입해서 값을 저장하면 안 된다.
	// 조건 2. 첫 번째 인자의 주소값을 가지는 포인터 변수 외 다른 인자의 주소값을 가지는 포인터 변수를 생성하면 안 된다.
	int* Ptr = &_Value0;
	int TestValue0 = *Ptr;
	
	// 해결방법 : 인자와 인자 간의 거리는 8바이트이다.
	// int*로 8바이트씩 이동하는 방법 
	// int* + n = sizeof(int) * n;
	// 8바이트   =       4     * 2;
	
	// 풀이 1 : 포인터가 8바이트씩 이동한 새로운 포인터 변수를 만든다.
	{
		int* Ptr1 = Ptr + 2;
		int TestValue1 = *Ptr1;

		int* Ptr2 = Ptr + 4;
		int TestValue2 = *Ptr2;

		int* Ptr3 = Ptr + 6;
		int TestValue3 = *Ptr3;

		int a = 0;
	}

	// 풀이 2 : 첫 번째 인자의 주소값을 가진 포인터를 8바이트 전진시키고 그 값을 포인터에 다시 대입힌다.
	{
		Ptr = Ptr + 2;
		int TestValue1 = *Ptr;

		Ptr = Ptr + 2;
		int TestValue2 = *Ptr;

		Ptr = Ptr + 2;
		int TestValue3 = *Ptr;

		int a = 0;
	}

	Ptr = &_Value0;
	// 풀이 3 : 포인터를 8바이트씩 전진시킨 값을 역참조하여 값을 넣어준다.
	{
		int TestValue1 = *(Ptr + 2);
		int TestValue2 = *(Ptr + 4);
		int TestValue3 = *(Ptr + 6);

		int a = 0;
	}

	// 풀이 4 : 배열 풀이
	{
		int* Arr[4] = {};
		for (int i = 0; i < 4; i++)
		{
			Arr[i] = Ptr + (i * 2);
		}

		int a = 0;
	}
	

	int a = 0;
}

// 해결방법

int main()
{
	Test(10, 20, 30, 40);

	int A = 0;
	int B = 10;
	int* APtr = &A;
	unsigned __int64 Result = Address(APtr);
	unsigned __int64 SubResult = AddressSub(&A, &B);

	int a = 0;

}

