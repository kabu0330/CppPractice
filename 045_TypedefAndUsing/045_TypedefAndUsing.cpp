#include <iostream>

#define SUM(VALUE) VALUE + VALUE
#define MUL(VALUE) VALUE * VALUE

int main()
{
    int Result0 = MUL(SUM(10));
    int Result1 = 10 + 10 * 10 + 10;

    // (10 + 10) = 20, 20 * 20 = 400 ?

   
    return 0;
}


