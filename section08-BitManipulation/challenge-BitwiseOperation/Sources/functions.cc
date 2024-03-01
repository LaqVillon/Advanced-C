/*
 * First attempt to make a funtion that reads a binary 
 * (as a 'long long unsigned' type), converts to decimal 
 * and prints the result.  
 */
long long unsigned  convert_binary_decimal (long long unsigned  n)
{
    long long unsigned  decimal_number = 0, remainder = 0;
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


/*
 * First attempt to make a funtion that reads a decimal 
 * (as a 'long long unsigned' type), converts to decimal 
 * and prints the result.  
 */
long long unsigned  convert_decimal_binary (long long unsigned  n)
{
    long long unsigned  binary_number = 0;
    long long unsigned  remainder, i = 1;
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
    //printf("\n");
    return binary_number;
}


/*
 * Use this function just for visualisation of the ~ operator
 */
long long convertDecimalToBinary_solution_course(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}