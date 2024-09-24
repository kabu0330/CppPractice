#include <iostream>

int NumberCount(int _Value)
{
    int Count = 0;

    while (_Value)
    {
        _Value /= 10;
        Count++;
    }

    return Count;
}

int main()
{
    int Value = 12345;

    int Count = NumberCount(Value);

    return 0;

}

