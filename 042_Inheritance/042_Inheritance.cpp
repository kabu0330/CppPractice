#include <iostream>


class Parent
{
public:
    void Call(Child& _Child)
    {

    }
};

// 자식 클래스 : 부모 클래스
class Child  : public Parent
{
public:


};

int main()
{
    int ParentSize = sizeof(Parent);
    int ChildSize = sizeof(Child);

    return 0;
}

