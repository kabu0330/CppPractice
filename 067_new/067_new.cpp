#include <iostream>

void PlayerCreate(class Player* _Ptr);

class Player
{
public:
    int Hp = 100;
    int Att = 10;
};

void PlayerCreate(Player* _Ptr)
{
    _Ptr->Hp = 100;
    _Ptr->Att = 10;
}

int main()
{
    int Size = sizeof(void*);
    void* Ptr = malloc(sizeof(Player));
    Player* PlayerPtr = reinterpret_cast<Player*>(Ptr);
    // 생성자까지 호출
    PlayerCreate(PlayerPtr);

    //Player* PlayerPtr2 = malloc(sizeof(Player)); 
    // malloc의 반환값이 void*

    return 0;
}
