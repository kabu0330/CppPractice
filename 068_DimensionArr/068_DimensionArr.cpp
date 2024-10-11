#include <iostream>

int main()
{
	char Arr[2][2 + 1] = { {0, 1} , { 2, 3 } };
	int Size = sizeof(Arr);


	char** DimensionArr = new char* [10] {0, };
	int Size0 = sizeof(DimensionArr);
	
	char* Arr1 = new char[10];

	return 0;
}

