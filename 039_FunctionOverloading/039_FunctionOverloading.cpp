#include <iostream>

void Function(void)
{
}

void Function(int _Value)
{
}

//int Function(int _Value) // 컴파일 에러
//{
//	return 0;
//}

//void Function(int , char)
//{
//}
//
//void Function(char, int)
//{
//}

//
//void Function(const char _Char)
//{
//}

void Function(int& _Ref)
{
	// 변수를 수정할 수 있는 참조
}

void Function(int& const _Ref)
{
	// 변수를 수정할 수 있는 참조
}

//void Function(int* const _Ptr)
//{
//}






int main()
{
	std::cout << "컴파일 오류 없음" << std::endl;


}

