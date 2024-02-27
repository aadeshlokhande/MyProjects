#include<stdio.h>
int main()
{
    char a;
    printf("Enter a number = ");
    scanf("%c",&a);

    if(a>='0' && a<='9')
    {
        printf("this is digit");
    }
    else
    {
        printf("not a digit");
    }
    return 0;
}