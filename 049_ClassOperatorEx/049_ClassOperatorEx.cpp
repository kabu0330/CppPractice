#include <iostream>

class MyInt
{
public:
	MyInt& operator=(const int& _Value)
	{
		Value = _Value;
		return *this;
	}

	MyInt()
	{

	}

	MyInt(int _Value)
	{

	}

	int operator()(const int& _Value)
	{
		return 200;
	}

	int operator[](const int& _Value)
	{
		return Value;
	}



private:
	int Value = 0;	
};

int main()
{
	int   RealInt;
	MyInt FakeInt;

	RealInt = 20;
	FakeInt = 20;
	
	int     Int = int  (10);
	MyInt MyINt = MyInt(15);

	FakeInt = RealInt = Int = 100; // FakeInt = 100;

	int Result = FakeInt(0); // Result = 200;
	
	FakeInt[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	FakeInt[i] = i;
	//}

	int ArrResult0 = FakeInt[0];
	int ArrResult1 = FakeInt[1];
	int ArrResult2 = FakeInt[2];


	return 0;
}

