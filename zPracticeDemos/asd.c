#include<stdio.h>
int main()
{
    int size,k,count = 0;
    printf("enter a size = ");
    scanf("%d",&size);
    int ary[size];
    
    for(int i = 0; i<size; i++)
    {
        printf("enter ary[%d] = ",i);
        scanf("%d",&ary[i]);
    }
    
    printf("enter a value of K = ");
    scanf("%d",&k);
    
    for(int i = 0; i<size; i++)
    {
        for(int j = 1; j<=k; j++)
        {
            if(ary[i]*j==6)
            {
                ++count;
            }
        }
    }
    
    printf("count = %d",count);
}
