#include <iostream>

class Player
{
public:
    Player() 
    {
    }

    Player(const char* const _Name, int _Hp, int _Att, int _Def)
        : Hp(_Hp), Att(_Att), Def(_Def)
    {
        strcpy_s(Name, _Name);
    }
private:
    char Name[10] = "None";
    int Hp = 200;
    int Att = 20;
    int Def = 30;
};

int main()
{
    Player Magician = Player("마법사", 80, 20, 5);

    return 0;
}

