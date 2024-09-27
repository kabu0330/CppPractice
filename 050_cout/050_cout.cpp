#include <iostream>

class MyCout
{
public:
	MyCout& operator<<(const char* const _Str)
	{
		printf_s(_Str);
		return *this;
	}
};

class MyEndl
{
public:

	MyEndl& operator<<(const char& _LineBreak)
	{
		printf_s("\n");
		return *this;
	}
};

int main()
{
	MyCout Cout;
	Cout.operator<<("Hello My operator Cout \n");
	Cout << "Hello MyCout";
	std::cout << std::endl;
	MyEndl Endl;
	// Cout << "Hello MyEndl" << Endl;


}

