#include <iostream>

int NumberCount(int _Value)
{
    int Result = 0;

    while (_Value)
    {
        _Value /= 10;
        Result += 1;
    }
    return Result;
}

int TenPow(int _Value)
{
    int Result = 10;
    for (int i = 0; i < _Value - 1; i++)
    {
        Result *= 10;
    }
    return Result;
}

void NumberToString(char* Buffer, int BufferSize, int _Value)
{
    // 3자리
    int ValueCount = NumberCount(_Value);
    
    int Digits[10] = { 0 };
    for (int i = 0; i < ValueCount; i++)
    {
        Digits[i] = 
    }

    char Ch = '0';

    

    

}


int main()
{
    int Result = NumberCount(1230);

    int Pow = TenPow(3);

    char Arr[100] = { 0 };
    NumberToString(Arr, 100, 123);

    Arr;

    return 0;
}

