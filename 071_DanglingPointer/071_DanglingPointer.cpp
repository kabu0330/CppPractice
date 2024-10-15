#include <iostream>

int main()
{
    int MyInt = 10;
    int* FirstPtr = new int(MyInt);

    int* SecondPtr = FirstPtr;

    size_t Address0 = reinterpret_cast<size_t>(FirstPtr);
    size_t Address1 = reinterpret_cast<size_t>(SecondPtr);

    



    delete FirstPtr;
    FirstPtr = nullptr;

    int Result = *SecondPtr + 1;
    //   11 ?  =    10      + 1

    return 0;
}
