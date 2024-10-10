#include <iostream>

class MyInt
{
public:
	int Value = 0;

	int& operator++()
	{
		Value += 1;
		return Value;
	}
	int operator++(int _Value)
	{
		int Result = Value;
		Value += 1;
		return Result;
	}

	MyInt(int _Value)
	{
		Value = _Value;
	}


};

int main()
{
	MyInt MyInt = 10;
	int Result0 = ++MyInt;
	int Result1 = MyInt++;


	for (size_t i = 0; i < length; i++)
	{

	}
	return 0;
}


