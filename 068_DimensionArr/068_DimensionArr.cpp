#include <iostream>

int main()
{
	char Arr[2][2 + 1] = { {0, 1} , { 2, 3 } };
	int Size = sizeof(Arr);


	char** DimensionArr = new char* [10] {0, };
	int Size0 = sizeof(DimensionArr);
	
	char* Arr1 = new char[10];


	// int IntArr[높이][너비]
	// int IntArr[행][열]
	// int IntArr[y][x]
	int IntArr[3][2] = {
		{0, 1},
		{2, 3},
		{4, 5}
	};

	// int IntArr[y][x]
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			printf_s("%d",IntArr[y][x]);
		}
		printf_s("\n");
	}

	printf_s("%d", IntArr[1][1]);
	//					3


	return 0;
}

