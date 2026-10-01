#include <stdio.h>
int main()
{
    // tip : agar code aage piche ho gaya to  se code ko right click kr ke formate doc. kar do

    printf("\n**** Decision Making in C ****\n\n");
    int age;
    printf("Enter age = ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You are not eligible to drive");
    }
    else if (age >= 18 && age <= 75)
    {
        printf("You are eligible to drive");
    }
    else (age > 76);
    {
        printf("You are not eligible to drive");
    }

    return 0;
}