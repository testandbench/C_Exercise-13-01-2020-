#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000],b[1000],c[1000];
    printf("Enter First String");
    gets(a);
    printf("Enter Second String");
    gets(b);
    printf("\nthe Strings before Swap");
    printf("\nFirst String is %s",a);
    printf("\nSecond String is %s",b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("\nthe Strings after Swap");
    printf("\nFirst String is %s",a);
    printf("\nSecond String is %s",b);
}
