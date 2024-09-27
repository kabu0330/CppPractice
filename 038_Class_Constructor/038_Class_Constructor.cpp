#include <iostream>
#include <assert.h>

class Player
{
public:
	Player()
		: Name("Constructor"), Hp(1), Att(2), Def(3)
	{
		char Str[15] = "COPY";
		strcpy_s(Name, Str);
	}

private:
	char Name[15] = "NONE";
	int Hp = 100;
	int Att = 20;
	int Def = 10;
};

int main()
{
	Player CreateCharacter;
	Player Constructor = Player();

	// assert(false);
	
	std::cout << "Hello" << std::endl;
	std::cout.operator<<("Hello") << std::endl;
	
	std::cout.operator<<(10).operator<<(20);
	std::cout.operator<<(10);
	std::cout.operator<<(20);

	std::cout << 10 << 20;


}

