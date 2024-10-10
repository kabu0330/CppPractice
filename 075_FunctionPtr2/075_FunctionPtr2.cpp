#include <iostream>

void (*__vfptrArr[100])();

class FightUnit
{
public:
    void (**__vfptr)() = reinterpret_cast<void(**)()>(__vfptrArr);

    FightUnit()
    {
        __vfptr = nullptr;
    }
};


int main()
{
    FightUnit FightZone;
    int PtrArrSize = sizeof(__vfptrArr);
    int DoublePtrSize = sizeof(FightZone.__vfptr);

    return 0;
}

