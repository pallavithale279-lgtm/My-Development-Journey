#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n**** strings in c ****\n\n");
    char name[4] = {'s', 'a', 'm', '\0'};
    printf("%s\n", name);
    char str1[65], str2[98], str3[32];
    strcpy(str1, name);
    strcpy(str1, "jack");
    strcpy(str2, "sack");
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%d\n", strcmp(str1, str2));

    return 0;
}