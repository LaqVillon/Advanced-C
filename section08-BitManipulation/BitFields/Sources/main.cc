/* 
 * Bit fields
 * This allows you to specify the number of bitd in which an int member of a structure is stored
 * c99 and c11 additionally allow type _Bool bit fields
 * 
 */

#include <stdio.h>


struct Packed_struct
{
    unsigned int :3;  // ':' means padding
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};


int main()
{
    struct Packed_struct packed_data;
    packed_data.type = 7;
    // packed_data.type = 256;  // This is only going to set the low order 8 biots
                              // of n assigned to that type member.
    unsigned int bit = packed_data.type;
    printf("\nNumber from 'type' bits of Packed_struct: %u", bit);
    if (packed_data.f2)
    {
        // If bit f2 is 1
    }
    struct Packed_struct packed_data2 = {1, 1};
    printf("\n");
    return 0;
}
