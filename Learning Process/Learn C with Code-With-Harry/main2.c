#include <stdio.h>
int main()
{
    printf("\n**** Rules for creating variables ****");
    // variable declaration
    int _jay; 
    int jayName;

    // variable intialization
    jayName = 67;

    // initialization and declaration simultaneosly
    char no = '7';

    const int i = 9; // value constant rakhni hai
    
    printf("\n\n**** operators in C ****\n");
    /*
    Arithmetic : + , -, *, /, %, ++, -- etc
    Logical    : and, or, not
    Relational : true (1) , false (0)
    Bitwise    
    Assignment : = , +=,  -=, *=, /=, %= etc
    misc       : &, *, ?:
    */
    printf(" \n 1. Arithmetic operator\n");
    int a = 10,  b = 2, c = 3;
    printf(" Addition of a and b  = %d\n",  a+b);
    printf(" Difference of a and b  = %d\n",  a-b);
    printf(" Multiplication of a and b  = %d\n",  a*b);
    printf(" Division of a and b  = %d\n",  a/b);
    printf(" Modulus of a and b  = %d\n",  a%b);
    printf(" increment of a  = %d\n",  ++a);
    printf(" Decrement of b  = %d\n",  --b);

    printf(" \n 2. Relational operator\n");
    int x = 10 , y = 20;
    printf("%d\n", x == y);
    printf("%d\n", x != y);
    printf("%d\n", x < y);
    printf("%d\n", x > y);
    printf("%d\n", x <= y);

    printf(" \n 3. logical operator\n");
    int j = 0, k = 1;
    printf("The logical operator retured = %d\n", j && k);
    printf("The logical operator retured = %d\n", j | k);
    printf("The logical operator retured = %d\n", ! k);
    printf("The logical operator retured = %d\n", ! k);

    printf(" \n 4. bitwise operator\n");
    int  A = 60, B = 13;
    // A = 00111100, 
    // B = 00001101
    // R = 00001100
    printf("Bitwise and operator return = %d\n", A & B);
    printf("Bitwise or operator return = %d\n", A | B);
    printf("Bitwise xor operator return = %d\n", A ^ B);
    printf("Bitwise  ones complement operator return = %d\n", ~ B);
    printf("Bitwise left shieft operator return = %d\n", A << B);
    printf("Bitwise right shift operator return = %d\n", A >> B);

    printf(" \n 5. Assignment operator\n");
    int m = 9;
    m += 2;
    printf(" m  is %d", m);

    printf(" \n 6. Misc operator\n");
    

    return 0;
}