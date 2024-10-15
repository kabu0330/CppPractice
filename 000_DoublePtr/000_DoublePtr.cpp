#include <iostream>

int main()
{
	int Value0 = 99;
	int Value1 = 11;
	int Value2 = 22;

	int* IntPtr = &Value0;
	int Result0 = *IntPtr;
	//   99

	__int64 AddressValue = reinterpret_cast<__int64>(&Value0);
	__int64 AddressPtr = reinterpret_cast<__int64>(IntPtr);




	__int64 AddressValue0 = reinterpret_cast<__int64>(&Value0);
	__int64 AddressValue1 = reinterpret_cast<__int64>(&Value1);
	__int64 AddressValue2 = reinterpret_cast<__int64>(&Value2);
	int difference0 = static_cast<int>(AddressValue1 - AddressValue0);
	int difference1 = static_cast<int>(AddressValue2 - AddressValue1);



	//IntPtr + 1;
	// Ptr + (sizeof(int) * 1 )byte

	int Result1 = *(IntPtr + 8);
	//   11     =    IntPtr + 32

	int Result2 = *(IntPtr + 16);


	int Result3 = IntPtr[8];
	//   11    =  IntPtr  + sizeof(int) * 8
	//         = *(IntPtr +    32byte)  

	int Result4 = IntPtr[16];


	int Value = 10;

	int* Ptr = &Value; 
	   Ptr; // == &Value
	  *Ptr; // == int& Value
	Ptr[0]; // == int& Value


	int** DoublePtr = new int* [10];
	   DoublePtr; // == &int*[0]
	  *DoublePtr; // int*&
	DoublePtr[0]; // int*&

	__int64 Address10 = reinterpret_cast<__int64>(DoublePtr);
	__int64 Address11 = reinterpret_cast<__int64>(&DoublePtr[0]);
	int Gap = static_cast<int>(Address11 - Address10);

}

