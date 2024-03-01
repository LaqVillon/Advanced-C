/* 
 * Bitmasks
 * It is a data used for bitwise operations. It Stores a bit pattern with some bits set to on (1) or off(0).
 * It can be used to set multiple bits in a byte
 * 
 */

#include <stdio.h>


int main()
{
    int flags = 15;  // 0000 1111 
    int mask = 182;  // 1011 0110
    // flags |= mask;   // 1011 1111
    // flags &= ~(mask); // 0000 1001  // clearing bits '1' from the mask
    flags ^= mask;   // 1011 1001  // Use to toggle bits 
    printf("\n");
    return 0;
}
