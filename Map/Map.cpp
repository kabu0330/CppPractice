#include <iostream>
#include "UMap.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


    UMap TestMap;

    // pair가 뭔지 
    UPair PairValue = { 10, 2 };
    PairValue.first = 10;
    PairValue.second = 2;

    int a = 0;

    TestMap.insert({ 10, 0 }); // <= root
    TestMap.insert({ 2, 0 });
    TestMap.insert(Umake_pair(5, 0));
    TestMap.insert(Umake_pair(7, 0));
    TestMap.insert(Umake_pair(15, 0));

    TestMap.Root;

    int a = 0;

}
