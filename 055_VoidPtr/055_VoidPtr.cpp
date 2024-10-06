#include <iostream>

void Address(void* _Value)
{
    std::cout << "주소 출력 void* : " << _Value << std::endl;

    printf_s
}

int main()
{
    int   Int = 100;
    char  Char = 'A';
    float Float = 10.0f;

    Address(&Int);
    Address(&Char);
    Address(&Float);

    int* Ptr = &Int;
    int** DoublePtr = &Ptr;


    return 0;
}
