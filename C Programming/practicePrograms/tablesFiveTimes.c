
#include<stdio.h>
int main()
{
    for(int x = 1;x<=5;x++)
    {
        printf("++++++++%d times++++++++\n",x);
        for(int i=1; i<=10; i++)
        {
            for(int j = 1; j<=10; j++)
            {
                printf("%d\t",i*j);
            }
            printf("\n");
        }
        printf("\n");
    }
}