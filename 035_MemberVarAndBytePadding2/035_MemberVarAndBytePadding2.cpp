#include <iostream>

class Padding
{
public:
	__int64 i64; // 8
	bool b0;
	short s0;  // 4
	short s1;  
	bool b1;
	bool b2;  // 4 
	// 8 + 4 + 4 = 16byte
};

class InterByte
{
public:
	// [ch][pb][pb][pb] [pb][pb][pb][pb] [i64][i64][i64][i64] [i64][i64][i64][i64]
	//  1   2   3   4     5   6   7   8    9   10    11   12    13   14   15   16 byte   
	char     ch;
	__int64 i64;
};

class Void
{

};

class CPUFriendly
{
	bool   b; // 1 byte
	char  ch; // 1 byte
	short sh; // 2 byte 
	//		   = 4 byte

	int    i; // 4 byte
			
	// [b][ch][sh][sh] [i][i][i][i] 
	//  1   2   3   4   5  6  7  8 byte   
	// 총 4 byte + 4 byte = 8 byte
	// 패딩 바이트 없음

};
CPUFriendly NewClass;



class CPUUnfriendly
{
	bool   b; // 1 byte
			  // 3 byte = padding byte 
				   
	int    i; // 4 byte
				   
	char  ch; // 1 byte
	short sh; // 2 byte 
			  // 1 byte = padding byte
	
	// [b][pb][pb][pb] [i][i][i][i] [ch][sh][sh][pb] 
	//  1   2   3   4   5  6  7  8    9  10  11  12 byte   
	// 총 (1 byte + 3 pd byte) + 4byte + (3byte + 1 pd byte) = 12 byte
	// CPU 친화적인 자료형 나열보다 메모리를 4바이트 더 잡아먹는다.
};
CPUUnfriendly NewClass2;

int main()
{



	InterByte Inter = InterByte();

	int Size1 = sizeof(Inter);
	__int64 StartAddress = reinterpret_cast<__int64>(&Inter);
	__int64 FirstVar     = reinterpret_cast<__int64>(&Inter.ch);
	__int64 InterAddress = FirstVar - StartAddress;
	__int64 Sec = reinterpret_cast<__int64>(&Inter.i64);


	Padding Class = Padding();
	int Size = sizeof(Class);

	__int64 Address0 = reinterpret_cast<__int64>(&Class.i64);
	__int64 Address1 = reinterpret_cast<__int64>(&Class.b0);
	__int64 Address2 = reinterpret_cast<__int64>(&Class.s0);
	__int64 Address3 = reinterpret_cast<__int64>(&Class.s1);
	__int64 Address4 = reinterpret_cast<__int64>(&Class.b1);
	__int64 Address5 = reinterpret_cast<__int64>(&Class.b2);

	return 0;
}

