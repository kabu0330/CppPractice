#include <iostream>


class MyInt
{
public:
    int Value = 5;
};

class Player
{
public:
    int Hp = 100;
};


int operator-(Player& _Player, const MyInt _MyInt)
{
    return _Player.Hp -= _MyInt.Value;
}



int main()
{
    MyInt MyInt;
    Player Character;

    int Result = Character - MyInt;
    //    95   =   100     -  5

    return 0;
}





