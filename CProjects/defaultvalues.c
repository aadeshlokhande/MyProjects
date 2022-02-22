// array - collection of data
// int a[size];
// int a[10] = {23,42,53,42,64,45,36,24,35,64};
#include<stdio.h>
int main()
{
    // int a[10] = {23,42,53,42,64,45,36,24,35,64};
    // printf("%d\n",a[4]);
    // int a[10];
    // a[1] = 12;
    // a[6] = 65;
    // printf("%d\n",a[6]);

    // int a[5];
    // printf("Enter a number = ");
    // scanf("%d",&a[3]);
    // printf("a[3] = %d",a[3]);

    int ary[10000];
    for(int i = 0;i<10;i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&ary[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ",ary[i]);
    }
}