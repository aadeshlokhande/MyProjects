// string - collection of char 
#include<stdio.h>
int main()
{
    char name[10] = {'A','a','d','e','s','h','\0'}; 
    char a[100] = "aadesh lokhande";
    printf("%s",a);
    for(int i=0;i<7;i++)
    {
        printf("%c",name[i]);
    }

    char abc[100];
    printf("Enter your name = ");
    gets(abc);
    printf("%s",abc);
}