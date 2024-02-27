// recursion


// syntax
// datatype functionName()
// {
//     statements;
//     functionName();
// }

// main()
// {
//     functionName();
// }
// =====================================

// factorial
// 5! = 5x4x3x2x1
// 4! = 4x3x2x1

// 5! = 5x4!;
// num! = num x (num-1)!
// 1! = 1
// 0! = 1

#include<stdio.h>
int factorial(int num)
{
    if((num==1) || (num==0))
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("%d! = %d\n",a,factorial(a));
}


// 0 1 1 2 3 5 8 13 





