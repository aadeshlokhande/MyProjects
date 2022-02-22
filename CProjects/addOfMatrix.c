#include<stdio.h>
// Code By Aadesh Lokhande
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    printf("1st matrix =  \n");
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix1[%d][%d] = ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("2nd matrix \n");
    for(int i=0 ; i<3 ;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix2[%d][%d] = ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nAddition of matrx is \n");
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
}