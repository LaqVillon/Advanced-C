/* 
 * Challenge Setting and Reading bits
 * - This program reads an integers and cheks if the 'nth' bit is set or not
 * - The program set this 'nth' bit to 1,
 * 
 */


#include <stdio.h>


int main()
{
    printf("\nEnter a number: \n");
    int number = 0;
    scanf("%d", &number);
    printf("\nEnter nth bit (from right to left) to check and set (0-31): \n");
    int nth = 0;
    scanf("%d", &nth);
    int bitstatus = (number >> nth) & 1;
    printf("\n%d", number >> nth);
    printf("\nThe %d bit is current set to %d", nth, bitstatus);
    //printf("\nThe %d bit is set to %d", nth, bit_set);
    int new_number = (1 << nth) | number;
    printf("\nBit set to 1 successfully!");
    printf("\nNumber before setting %d bit: %d(in decimal)", nth, number);
    printf("\nNumber after setting %d bit: %d(in decimal)", nth, new_number);
    printf("\n");
    return 0;
}