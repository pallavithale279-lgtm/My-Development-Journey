#include <stdio.h>
int main()
{
    printf("\n**** Looping in c ****\n");
    // while loop
    int j = 10;
    int index = 0;
    while (index < 10)
    {
        printf("while loop : %d\n", index);
        index++;
    }
    // for loop
    for (int j = 10; j < 21; j++)
    {
        printf("For loop : %d\n", j);
    }
    // do while loop
    do
    {
        printf("do while loop is runninng\n");
    } while (j > 231);
    
    return 0;
}