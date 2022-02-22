#include<stdio.h>
int main()
{
    int a = 12394,count = 0,mod,div=1;
    
    while (div!=0)
    {
        div = a/10;
        mod = div%10;
        count++;
    }
    printf("%d",count);

    
}