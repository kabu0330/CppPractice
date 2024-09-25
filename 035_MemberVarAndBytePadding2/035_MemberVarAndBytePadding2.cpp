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
	char     ch;
	__int64 i64;
};

int main()
{
	InterByte Inter = InterByte();
	int Size1 = sizeof(Inter);
	__int64 Init = reinterpret_cast<__int64>(&Inter);
	__int64 Sec = reinterpret_cast<__int64>(&Inter.i64);
	__int64 VarInter = Sec - Init;


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

