#include <iostream>
#include "UList.h"
#include <list>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//{
	//	std::list<int> StdList;

	//	// 데이터 삽입
	//	StdList.push_back(0);
	//	StdList.push_back(1);
	//	StdList.push_back(2);
	//	StdList.push_front(1000);

	//	// 순회
	//	std::list<int>::iterator StartIter = StdList.begin();
	//	std::list<int>::iterator EndIter = StdList.end();
	//	for (; StartIter != EndIter; ++StartIter)
	//	{
	//		int& Value = *StartIter;
	//		std::cout << Value << std::endl;
	//	}
	//	printf_s("\n");
	//	
	//	// 삭제
	//	std::list<int>::iterator ReStartIter = StdList.begin();
	//	ReStartIter = StdList.erase(ReStartIter);

	//	// 삭제 후 순회
	//	for (; ReStartIter != EndIter; ++ReStartIter)
	//	{
	//		int& Value = *ReStartIter;
	//		std::cout << Value << std::endl;
	//	}
	//}

	UList List;
	List.push_back(0);
	List.push_back(1);
	List.push_back(2);
	List.push_front(999);

	UList::iterator StartIter = List.begin();
	UList::iterator EndIter = List.end();

	for (; StartIter != EndIter; ++StartIter)
	{
		int& Value = *StartIter;
		std::cout << Value << std::endl;
	}

	printf_s("\n");

	UList::iterator ReStartIter = List.begin();
	ReStartIter = List.erase(ReStartIter);
	
	for (; ReStartIter != EndIter; ++ReStartIter)
	{
		int& Value = *ReStartIter;
		std::cout << Value << std::endl;
	}

}

