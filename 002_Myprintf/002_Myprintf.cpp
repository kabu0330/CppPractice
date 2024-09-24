#include <iostream>

int MyPrintf(const char* const _Ptr, ...)
{
    const int ParameterInter = 8;

    __int64 IntAddress = reinterpret_cast<__int64>(_Ptr);

    int ArrIndex = 0;
    while (_Ptr[ArrIndex])
    {
        char Char = _Ptr[ArrIndex];

        if (Char == '%')
        {
            Char == _Ptr[ArrIndex + 1];

            switch (Char)
            {
            case 'd': // 정수일 때
            {
                int* Ptr = reinterpret_cast<int*>(IntAddress + ParameterInter);

                break;
            }
            default:
            {
                break;
            }
            }
          
        }
        // 한 글자씩 출력해주는 함수 : putchar
        putchar(_Ptr[ArrIndex]); 
        ArrIndex++; // 반복문 종료 조건식
    }

    return 0;
}

int main()
{
    MyPrintf("Number : %d/n", 12345);


    return 0;
}

