#include <iostream>

class Player
{
public:

    __forceinline void CreateText()
    {
        std::cout << "플레이어를 생성합니다." << std::endl;
    }

};

int main()
{
    Player NewPlayer;

    //NewPlayer.CreateText();
    std::cout << "플레이어를 생성합니다." << std::endl; // inline

    return 0;
}

