/* 
 * Challenge Converting binary to decimal and vice-versa
 * 
 * Important:
 *  // There is no format specifier for bool types. 
 *  // However, since any integral type shorter than 'int' 
 *  // is promoted to 'int' when passed down to 
 *  // printf()'s variadic arguments, you can use '%d':
 *   
 */

#include <stdio.h>
#include <stdint.h> 
#include <math.h>
// #include <stdbool.h>  // Necessary for 'bool' type variable

typedef long long unsigned int_32bits;

int_32bits convert_binary_decimal (int_32bits n);
int_32bits convert_decimal_binary (int_32bits n);

int main()
{
    printf("\nWARNING!! Maximum value acepted = 11111111111111111111 (binary) = 1048575 (decimal) \n");
    printf("\nEnter the number in binary system: ");
    //_Bool binary; // Declaration of a boolean variable
    //bool binary;  // this statement requires '#include <stdbool.h>'
    int_32bits binary;
    scanf("%llu", &binary);
    int_32bits result_decimal = convert_binary_decimal(binary);
    printf("\n%llu in binary = %llu in decimal", binary, result_decimal);
    printf("\nSize (bytes) of the initial number %lu", sizeof(int_32bits));
    printf("\n");
    
    
    printf("\nEnter the number in decimal system: ");
    int_32bits decimal;
    scanf("%llu", &decimal);
    int_32bits result_binary = convert_decimal_binary(decimal);
    printf("\n%llu in decimal = %llu in binary", decimal, result_binary);
    printf("\n");
    
    return 0;
}

int_32bits convert_binary_decimal (int_32bits n)
{
    int_32bits decimal_number = 0, remainder = 0;
    int i = 0;
    while (n != 0)
    {
        remainder = n % 10; // digit in decimal system
        n /= 10;
        decimal_number += remainder * (1 << i); //pow(2, i);
        ++i;
    }
    return decimal_number;
}

int_32bits convert_decimal_binary (int_32bits n)
{
    int_32bits binary_number = 0;
    int_32bits remainder, i = 1;
    //char digit;
    while (n != 0)
    {
        remainder = n % 2;  // digit in binary system
        n /= 2;
        binary_number += remainder * i;
        //digit = binary_number;
        //printf("%llu", binary_number);

        i *= 10;
    }
    printf("\n");
    return binary_number;
}