#include <iostream>

int main()
{
    // 1. 대입연산자
    int LValue = 10;
    
    
    int Left = 10;
    int Right = 5;
    int Result = 0;

    // 2. 산술연산자
    Result = Left + Right; // 10 + 5 = 15
    Result = Left - Right; // 10 - 5 = 5
    Result = Left * Right; // 10 * 5 = 50
    Result = Left / Right; // 10 / 5 = 2
    Result = Left % 3;     // 10 % 3 = 1

    // division by zero
    //Result = Left / 0;

    // 3. boolean 연산
    bool bResult0     = 0;                // false
    bool bResult1     = 1;                // true
    bool bResultTrue  = true;             // true
    bool bResultFalse = false;            // false
    bool bReslut2     = 3423246365437546; // true


    // 4. 비교연산자

   // int Left = 10;
   // int Right = 5;
    bool bResult = false;

    bResult = Left == Right; // 10 = 5 : false
    bResult = Left != Right; // 10 ≠ 5 : true

    bResult = Left > Right;  // 10 > 5 : true
    bResult = Left < Right;  // 10 < 5 : fasle

    bResult = Left >= Right; // 10 >= 5 : true
    bResult = Left <= Right; // 10 <= 5 : fasle


    // 5. 논리연산자

    bool NotResult = false;
    NotResult = !NotResult; // !fasle : true 

    bResult = true  && true ; // true  and true  : true
    bResult = true  && false; // true  and false : false
    bResult = false && false; // fasle and false : false
    bResult = true  || true ; // true   or true  : true
    bResult = true  || false; // true   or false : true
    bResult = false || false; // false  or fasle : false


    // 6. 비트 연산자
    int BitLeft  = 0b0001;
    int BitRight = 0b10000001;
    int BitResult = 0;

    
    int IntMaxValue = 0b01111111111111111111111111111111;
    int IntMinValue = 0b10000000000000000000000000000000;


    int ZeroBit0 = 0b00000000000000000000000000000000; // 0
    int ZeroBit1 = 0b10000000000000000000000000000000; // -0 ?



    BitLeft  = 0b1001; // 1
    BitRight = 0b0101; // 2 + 1 = 3

    int BitToInt = 0b1011;
//                   8421
//               8 + 2 + 1 = 11


    BitResult = BitLeft & BitRight;
    // BitLeft   : 0b1001
    // BitRight  : 0b0101
    // BitResult : 0b0001 = 1

    BitResult = BitLeft | BitRight;
    // BitLeft   : 0b1001
    // BitRight  : 0b0101
    // BitResult : 0b1101 = 8 + 4 + 1 = 13

    BitResult = 0b0001 << 1;
    // Result : 0b0010 = 2

    BitResult = 0b1111 >> 1;
    // Result : 0b0111 = 4 + 2 + 1 = 7
    // 
    
    // 7. 비트 논리 연산

    BitResult = 0b0001 ^ 0b0101;
    //          0b0001
    //          0b0101
    //            0100 
    // Result = 0b0100 = 4

    int BitNot = 0;
    // Result = 0b 00000000 00000000 00000000 00000000 = 0

    BitNot = ~0;
    // Result = 0b 11111111 11111111 11111111 11111111 = -1



    Result = 0b11111111111111111111111111110101;

    BitNot = 10;
    // Result = 0b 00000000 00000000 00000000 00001010 = 10

    BitNot = ~BitNot;
    // Result = 0b 11111111 11111111 11111111 11110101 = -11

    //       조건식 ?   참  :  거짓 
    Result = 10 > 5 ? true : false; // 1
    Result = true   ? 1111 : 9999;  // 1111
    Result = false  ? 1111 : 9999;  // 9999


    int ByteSize = 100;
    ByteSize = sizeof(ByteSize);


    int a = 0;

}

