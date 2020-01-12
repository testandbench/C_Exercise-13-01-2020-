#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000];
    printf("Enter String");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>="A"||a[i]<="Z")
        {
            a[i]=a[i]+32;
        }
    }
    printf("The lowered String is %s",a);
}
