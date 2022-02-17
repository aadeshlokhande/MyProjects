#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b; 
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d and b = %d\n",a,b);
}