#include <stdio.h>
int main()
{
    printf("\n**** switch statements in c ****\n\n");
    // jab hame kafi options se koi ek option choose karna ho tab ise use karte hai

    int a = 10, b = 5;
    int choose;

    printf("Choose from following\n"
           "1. For Addition\n"
           "2. for Difference\n"
           "Enter your choice :\n");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        printf("Addition = %d", a + b);
        break;

    case 2:
        printf("Difference = %d", a - b);
        break;

    default:
        printf("Invalid Input");
    }
    return 0;
}