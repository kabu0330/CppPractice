#include <iostream>


class Monster
{
public:
    Monster()
    {
        std::cout << "몬스터 생성자 호출" << std::endl;
    }

    virtual ~Monster()
    {
        std::cout << "몬스터 소멸자 호출" << std::endl;
    }
};

class Ork : public Monster
{
public:
    Ork()
    {
        std::cout << "오크 생성자 호출" << std::endl;
    }

    ~Ork()
    {
        std::cout << "오크 소멸자 호출" << std::endl;
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Monster* NewMonster = new Ork();

    //if (nullptr != NewMonster)
    //{
    //    delete NewMonster;
    //    NewMonster = nullptr;
    //}

    return 0;


}

