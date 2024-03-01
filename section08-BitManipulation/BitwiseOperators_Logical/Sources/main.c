/* 
 * Bitwise Oporators
 * 
 *  
 *   
 */

#include <stdio.h>


int main()
{
    short int w1 = 25;           // 0000000000011001
    short int w2 = 77;           // 0000000001001101
    short int w_and = w1 & w2;   // 0000000000001001 = 9
    short int w_or = w1 | w2;    // 0000000001011101 = 93
    short int w_xor = w1 ^ w2;   // 0000000001010100 = 84
    printf("Result (&): %d \n", w_and); 
    printf("Result (|): %d \n", w_or); 
    printf("Result (^): %d \n", w_xor); 

    // swaping
    short int x1 = w1;
    short int x2 = w2;
    printf("Variables before swaping: %d %d\n", x1, x2);
    x1 ^= x2;
    x2 ^= x1;
    x1 ^= x2;
    printf("Variables after swaping: %d %d\n", x1, x2);
    long long unsigned int y1 = 10;
    signed int result = 0;
    result = ~(y1);
    printf("The opposite of my %llu is %u\n", y1, result);

    return 0;
}
