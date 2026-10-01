#include<stdio.h>
int main()
{
    printf("\n**** Taking input from user ****\n");
    int x;
    printf("\nEnter x = ");
    scanf("%d", &x);
    printf("Value of x is %f",(float) x);

    int num1, num2;
    printf("\nNum1 = ");
    scanf("%d", &num1);
    printf("Num2 = ");
    scanf("%d", &num2);
    printf("\nValue of num1/num2 is %f",(float) num1/num2);

    return 0;
}                  