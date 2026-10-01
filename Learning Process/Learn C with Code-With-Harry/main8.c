#include<stdio.h>
int glo = 23;
void newPrint(char * char1)
{
    printf("%s\n\n", char1);
}
int sum(int a, int b)
{
    return a + b;
}
float avg(int a, int b)
{
    return (a + b) /2 ;
}

int main()
{
    int glo = 31;
    printf("\n**** functions in c ****");
    // printf("\nThe newPrint function = %s", newPrint('z'));
    printf("\nThe sum fuction = %d", sum(23 , 31));
    printf("\nThe avg fuction = %f", avg(10 , 20));
    printf("\nThe global variable = %d", glo);
    
    return 0;
}