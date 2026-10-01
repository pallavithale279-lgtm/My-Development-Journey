#include <stdio.h>
int main()
{
    printf("\n**** Pointers in c ****\n");
    int a = 89;
    printf("%d\n", a);
    int* ptr = NULL;
    if (!ptr)
    {
        printf("Pointers are not null.\n");
    }
    ptr = &a;
    *ptr = 99555;
    printf("%d\n", a);
    return 0;
}