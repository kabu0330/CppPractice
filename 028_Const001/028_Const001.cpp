#include <iostream>

int main()
{
	// 1. 일반 변수의 상수화
	const int Stage = 20;
	// Stage = 25; // error
	
	int const FightCount = 15;
	// FightCount = 18; // error

	const int const LvMax = 100;
	// LvMax = 110; // error

	// 결론 : const를 자료형의 앞이든 뒤든 양쪽이든 어디에 갖다 붙여도 차이가 없다.


	
	// 2. 포인터 변수의 상수화
	
	// 포인터 변수는 2가지의 값을 가진다.
	// 1. 포인터가 가리키는 자료형 변수의 값
	// 2. 자료형 변수의 주소 값
	// 그 중 무엇을 상수화 하는지가 중요하다.

	// 2-1. 자료형 변수의 상수화

	const int* StagePtr = &Stage;
	//*StagePtr = 30; // error
	StagePtr = &FightCount; // ok


	int Address = 0;
	// 2-2. 자료형 변수의 주소값의 상수화
	//int* const FightCountPtr = &FightCount; // error : 수정가능한 변수의 주소값을 가지는 int* const 자료형과 상수 const int 는 자료형이 다름

	int FightCountMax = 20;
	int* const FightCountPtr = &FightCountMax;
	*FightCountPtr = 30; // ok
	// FightCountPtr = &Stage // error : 타입 불일치 
	// => const int 자료형과 int const* 자료형은 다르다.



	// 2-3. 자료형 변수와 포인터 변수 모두 상수화

	int LvMaxValue = 120;
	const int* const LvMaxPtr = &LvMaxValue;
	//*LvMaxPtr = 150; // error
	//LvMaxPtr = &Address; // error
	

	// 숫자 -> 문자
	// 아스키코드
	// 숫자 -> 0101010101010101010101 64
	char a = '0' + 3; //48번째
	char b = '1'; //49번째
	char c = '2'; //50번째

}
