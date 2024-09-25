#include <iostream>

class BytePadding0
{
public:
	// 함수는 class의 메모리 크기에 변화를 주지 않는다.
	void Function0(int _a, int _b)
	{

	}

	// 생성자는 메모리 크기에 변화를 주지 않는다.
	BytePadding0() {}

	// [0][0][0][0] [1][pb][2][2] [3][3][3][3][3][3][3][3] [4][5][6][pb] [7][7]
	int     var0; // 0~3
	bool    var1; // 4 pb
	short   var2; // 6~7
	__int64 var3; // 8~15
	bool    var4; // 16
	bool    var5; // 17
	bool    var6; // 18 pb
	short   var7; // 20~21

	// 결론 : 짝수 바이트 단위로 메모리 크기를 합칠 수 있으면 합치고
	//        홀수 단위로 떨어지면 패딩바이트를 넣는다.
};



int main()
{
	BytePadding0 Class0 = BytePadding0();

	int Size0 = sizeof(BytePadding0);

	__int64 ClassAddress0 = reinterpret_cast<__int64>(&Class0);
	__int64 ClassMember0 = reinterpret_cast<__int64>(&Class0.var0);
	__int64 ClassMember1 = reinterpret_cast<__int64>(&Class0.var1);
	__int64 ClassMember2 = reinterpret_cast<__int64>(&Class0.var2);
	__int64 ClassMember3 = reinterpret_cast<__int64>(&Class0.var3);
	__int64 ClassMember4 = reinterpret_cast<__int64>(&Class0.var4);
	__int64 ClassMember5 = reinterpret_cast<__int64>(&Class0.var5);
	__int64 ClassMember6 = reinterpret_cast<__int64>(&Class0.var6);
	__int64 ClassMember7 = reinterpret_cast<__int64>(&Class0.var7);
	
	

	__int64 InitInter0 = ClassMember0 - ClassAddress0; // int    
	__int64 InitInter1 = ClassMember1 - ClassAddress0; // bool   
	__int64 InitInter2 = ClassMember2 - ClassAddress0; // short  
	__int64 InitInter3 = ClassMember3 - ClassAddress0; // __int64
	__int64 InitInter4 = ClassMember4 - ClassAddress0; // bool   
	__int64 InitInter5 = ClassMember5 - ClassAddress0; // bool   
	__int64 InitInter6 = ClassMember6 - ClassAddress0; // bool   
	__int64 InitInter7 = ClassMember7 - ClassAddress0; // short  

	__int64 Inter1 = ClassMember1 - ClassAddress0; // int
	__int64 Inter2 = ClassMember2 - ClassMember1;  // bool + pb
	__int64 Inter3 = ClassMember3 - ClassMember2;  // short
	__int64 Inter4 = ClassMember4 - ClassMember3;  // __int64
	__int64 Inter5 = ClassMember5 - ClassMember4;  // bool
	__int64 Inter6 = ClassMember6 - ClassMember5;  // bool
	__int64 Inter7 = ClassMember7 - ClassMember6;  // bool + pb



	return 0;
}

