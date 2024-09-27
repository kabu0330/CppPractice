#include <iostream>

// 1. 클래스의 접근 제한 지정자가 생략되어 있다.
class DefaultClass
{
    int Value;
};

class PublicClass
{
public:
    int Value;
};

class ProtectedClass
{
protected:
    int Value;
};

class PrivateClass
{
private:
    int Value;
};

class Child : public ProtectedClass
{
    void Void()
    {
        Value;
   }
};


int main()
{
    Value;

    DefaultClass Default;
    Default.Value;

    PublicClass Public;
    Public.Value;

    PrivateClass Private;
    Private.Value;
    
    // 클래스의 기본 접근 제한 지정자는 private이다.
    // 명시하지 않으면 컴파일러가 자동으로 private로 분류한다.

    ProtectedClass Protected;
    Protected.Value;

    Child Child;
    Child.Value;


}

