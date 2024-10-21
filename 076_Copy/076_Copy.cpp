#include <iostream>

class Copy
{
public:
    int* Ptr;

    Copy()
    {
        Ptr = new int();
    }

    ~Copy()
    {
        if (nullptr != Ptr)
        {
            delete Ptr;
            Ptr = nullptr;
        }
    }

    void operator=(const Copy& _Other)
    {
        if (nullptr == this->Ptr)
        {
            this->Ptr = new int();
        }
        // 깊은 복사
        *this->Ptr = *_Other.Ptr;

        // 얕은 복사
        //this->Ptr = _Other.Ptr;
    }
};

class MyVector
{
public:
    Copy Value;
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    
    MyVector Vector;
    Copy Value = Copy();
    Vector.Value = Value;

    return 0;
}


