#include <stdio.h>
int main()

{
    // single line comments: compiler will ignore this
    /*
    this is a multiline comments
    dekho yaha
    phir ek baar
    */

    // data types ; int, float, char
    int a = 7;       // store integer size : 2-4 bytes
    unsigned short integer1 = 7; // 2 bytes
    long integer3 = 6; // 4 bytes 
    short integer2 = 7; // 2 bytes
    printf("\nThe size taken by int is %d", sizeof(int));
    printf("\nThe size taken by unsigned int is %d", sizeof(unsigned int));
    printf("\nThe size taken by short int is %d", sizeof(short int));

    float b = 8.0;  // store floating point value size : 4 bytes
    double myfloat = 4.5; // 8 bytes size, 15 decimal places precision
    long double myfloat1 = 3.422;  // 10 bytes size, 19 decimal places precision
    printf("\nThe size taken by float is %d", sizeof(float));
    printf("\nThe size taken by double is %d", sizeof(double));
    printf("\nThe size taken by long dooublel is %d", sizeof(long double));

    char c = 's';  // store character,̥  size : 1 byte,  6 decimal precision. char ko single collon main likhate hain.
    printf("\nThe size taken by char is %d", sizeof(char));
    printf("\nThe size taken by unsigned char is %d", sizeof(unsigned char));

    // here a, b, c are variables maane koi container jo value ko store karta hai

    printf("\nhello %d, %f, %c ", a, b, c);

    printf("\nThe size taken by int is %d", sizeof(int));
    return 0;
}