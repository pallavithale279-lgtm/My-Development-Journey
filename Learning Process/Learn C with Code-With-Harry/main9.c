#include <stdio.h>
int main()
{
    printf("\n**** Arrays in c ****");
    // declare and initialise array
    int arr[5] = {0, 1, 2, 3, 4};
    printf("\nArray : %d\n", arr[4]);

    // take input from user and print array of 5 values
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the  value for index %d = ", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value for index %d = %d \n", i, num[i]);
    }

    // take input from user and print array of 5 char
    char char1[5];
    for (int j = 0; j < 5; j++)
    {
        printf("Enter the char for index %d = ", j);
        scanf(" %c", &char1[j]); ////dekh idhar ek baar %c kaise likha hain.
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Index %d = %c \n", j, char1[j]);
    }

    return 0;
}