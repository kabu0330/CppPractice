#include <iostream>

class StatusUnit
{
public:
    virtual void StatusRender()
    {
        std::cout << Name << "의 전투 스텟 " << std::endl;
        std::cout << "체력   : " << Hp  << std::endl;
        std::cout << "공격력 : " << Att << std::endl;
    }

protected:
    char Name[10] = "NONE";
    int Hp  = 0;
    int Att = 0;
};

class Monster : public StatusUnit
{
public:
    Monster()
    {
        strcpy_s(Name, "Ork");
        Hp = 80;
        Att = 10;
    }
    // 몬스터는 부모 클래스의 함수를 그대로 받아 쓸 것이다.
};

class Player : public StatusUnit
{
public:
    Player()
    {
        strcpy_s(Name, "Warrior");
        Hp = 100;
        Att = 20;
    }

    void StatusRender() override
    {
        StatusUnit::StatusRender();
        std::cout << "무기 공격력 : " << WeaponAtt << std::endl;
    }

private:
    int WeaponAtt = 5;
};

class OnlyVirtual
{
    virtual void VirtualFunction()
    {

    }
    
    virtual void Fuction2()
    {

    }

    virtual void Function3()
    {

    }
};

int main()
{
    Player Warrior;
    Warrior.StatusRender();

    std::cout << std::endl;
    Monster Ork;
    Ork.StatusRender();

    

    return 0;
}

