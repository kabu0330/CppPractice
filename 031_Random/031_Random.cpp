#include <iostream>

__int64 Seed = 0;

void MySrand(int* _Value)
{
	Seed = reinterpret_cast<__int64>(_Value);
}

int MyRand()
{
	Seed += 1;
	return Seed;
}

int main()
{
	int Address = 0;
	MySrand(&Address);

	std::cout << MyRand() << std::endl;

	return 0;
   
}

