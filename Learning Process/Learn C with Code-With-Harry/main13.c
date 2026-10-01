#include<stdio.h>
#include<string.h>

struct Books {
    char name [50];
    char author[50];
    int price;
};

void printstruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Book author is %s\n", bk.author);
    printf("Book price is %d\n", bk.price);
}

int main()
{
    printf("\n**** structures ****\n");

    struct Books bk1, bk2;

    strcpy(bk1.name, "C Programing");
    strcpy(bk1.author, "Dennis");
    bk1.price = 78;

    printstruct(bk1);
    return 0;
}