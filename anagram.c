#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[1000],b[1000],temp,temp1;
    printf("Enter First String");
    gets(a);
    printf("Enter Second String");
    gets(b);
    int n=strlen(a);
    if(n!=strlen(b))//strings of diffrent lengths are not anagrams
    {
        printf("NoT Anagram");
        exit(0);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            if(b[i]>b[j])
            {
                temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
            }


        }



        }
if (strcmp(a, b) == 0)
    {
        printf("Anagram");
    }
    else {
        printf("Not Anagram");
    };
}



