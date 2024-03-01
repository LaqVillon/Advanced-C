/* 
 * Bitwise Oporators - Shifting
 * In most newdays platforms, 'sizeof(int) = 4'. 
 * Then: int i = 1 = 00000000000000000000000000000001 (32 bits)  
 */

#include <stdio.h>


int main()
{
    
    int w1 = 3;            // 00000000000...00011
    int result = w1 << 1;  // 00000000000...00110 // This shifting, indirectlu, multiplies a number by 2 
    printf("\nResult: %d << 1 =  %d", w1, result); 
    int w2 = 138;          // 000...0000000010001010
    int result2 = w2 << 2; // 000...0000001000101000
    printf("\nResult: %d << 2 =  %d", w2, result2); 

    unsigned int w3 = 415; // 00000000000...00011  // Be careful with 'signed' variables
    int result3 = w3 >> 1;  // 00000000000...00110 // This shifting, indirectlu, multiplies a number by 2 
    printf("\nResult: %d >> 1 =  %d", w3, result3); 
    int w4 = 138;          // 000...0000000010001010
    int result4 = w4 >> 2; // 000...0000001000101000
    printf("\nResult: %d >> 2 =  %d", w4, result4); 

    printf("\n");
    return 0;
}
