// Array - collection of data - data structure
// datatype arrayName[size];
// datatype arrayName[size] = {values};

#include<stdio.h>
int main()
{
    // int arr[10] = {12,41,35,64,75,64,43,62,75,35};
    // printf("%d\n",arr[2]);
    // scanf("%d",&arr[0]);
    // printf("%d\n",arr[0]);

    // for(int i = 0;i < 10;i++)
    // {
    //     printf("array[%d] = %d\n",i,arr[i]);
    // }



    int a[5];
    // scanf("%d",&a[0]);
    // printf("%d\n",a[0]);
    for (int i = 0; i<5; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nprinting value\n");
    for(int i = 0;i < 5;i++)
    {
        printf("array[%d] = %d\n",i,a[i]);
    }
}