#include<stdio.h>
int main()
{
    int rows;
    printf("Enter a number of rows = ");
    scanf("%d",&rows);
    for(int i = rows; i>=1; i--)
    {
        for(int j = 1; j <= rows; j++)
        {
            for(int k =1; k<=i; k++)
            {
                printf(" * ");
            }
            printf("\n");
        }
    }
    return 0;
}