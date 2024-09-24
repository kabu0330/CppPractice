#include <iostream>

int NumberCount(int _Value)
{
	int Count = 0;

	while (_Value)
	{
		_Value /= 10;
		Count++;
	}

	return Count;
}


void NumberToString(char* _Buffer, int BufferSize, int _Value)
{
	int NumDigits = NumberCount(_Value);
	
	int MultiplesOfTen = 1;
	for (int i = 0; i < NumDigits - 1; i++)
	{
		MultiplesOfTen *= 10;
	}
	
	for (int i = 0;  0 <= NumDigits - i - 1; i++)
	{
		int Share = _Value / MultiplesOfTen;
		_Buffer[i] = Share + '0';
		_Value -= Share * MultiplesOfTen;
		MultiplesOfTen /= 10;
	}


	return;
}

int main()
{
	char Arr[100] = { 0 };
	int Value = 34567;

	NumberToString(Arr, 100, Value);
	
	printf_s(Arr);
	
	return 0;
}

