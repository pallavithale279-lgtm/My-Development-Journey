#include<stdio.h>
int main()
{
    printf("\n**** conditional operator ****\n");

    int  age;
    printf("Enter age = ");
    scanf("%d", &age);

    char s = age > 18 ? 'B' : 'S';  // short hand if else
    printf("%c", s );
    return 0;
}