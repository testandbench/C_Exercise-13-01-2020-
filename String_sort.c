#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000],temp;
    printf("enter String");
    gets(a);
    int n=strlen(a);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }}
    }
       printf("the sorted string is %s",a);
}

