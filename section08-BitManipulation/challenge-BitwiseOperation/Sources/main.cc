/* 
 * Challenge Bitwise Operators
 * - This program reads two integers from the user,
 * - and it will print the results of applying all
 * - bitwise operations seen so far (~ ^ & | << >>)
 */


#include <stdio.h>


// Using the functions from the functions.cc file
extern long long unsigned convert_binary_decimal (long long unsigned n);
extern long long unsigned convert_decimal_binary (long long unsigned n);
extern long long convertDecimalToBinary_solution_course(int n);


int main()
{
    printf("\nWARNING!! Maximum value acepted = 11111111111111111111 (binary) = 1048575 (decimal) \n");
    printf("\nEnter the decimal integers separated by spaces: ");
    long long unsigned decimal1, decimal2;
    scanf("%llu", &decimal1);
    scanf("%llu", &decimal2);
    long long unsigned binary1 = convert_decimal_binary(decimal1);
    long long unsigned binary2 = convert_decimal_binary(decimal2);
    int result1 = ~((int) decimal1);  // Casting to 'int' before applying the ~ operator
    int result2 = ~((int) decimal2);  // Casting to 'int' before applying the ~ operator
    printf("\nThe result of applying the ~ operator on number %llu (%llu) is: %lld", decimal1, binary1, convertDecimalToBinary_solution_course(result1));
    printf("\nThe result of applying the ~ operator on number %llu (%llu) is: %lld", decimal2, binary2, convertDecimalToBinary_solution_course(result2));
    long long unsigned and_operator = decimal1 & decimal2;
    printf("\nThe result of applying the & operator on number %llu (%llu) and number %llu (%llu) is: %llu (%llu)"
           , decimal1, binary1, decimal2, binary2, and_operator, convert_decimal_binary(and_operator));
    long long unsigned or_operator = decimal1 | decimal2;
    printf("\nThe result of applying the | operator on number %llu (%llu) and number %llu (%llu) is: %llu (%llu)"
           , decimal1, binary1, decimal2, binary2, or_operator, convert_decimal_binary(or_operator));
    long long unsigned xor_operator = decimal1 ^ decimal2;
    printf("\nThe result of applying the ^ operator on number %llu (%llu) and number %llu (%llu) is: %llu (%llu)"
           , decimal1, binary1, decimal2, binary2, xor_operator, convert_decimal_binary(xor_operator));
    const int places = 2;
    long long unsigned left_shift = decimal1 << places;
    printf("\nThe result of applying the left shift operator << on number %llu (%llu) by %d places is: %llu (%llu)"
           , decimal1, binary1, places, left_shift, convert_decimal_binary(left_shift));
    long long unsigned right_shift = decimal1 >> places;
    printf("\nThe result of applying the right shift operator << on number %llu (%llu) by %d places is: %llu (%llu)"
           , decimal1, binary1, places, right_shift, convert_decimal_binary(right_shift));

    printf("\n");
    return 0;
}