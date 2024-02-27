// #include<stdio.h>
// void abc()
// {
//     printf("Hello je pn ahe ");
//     abc();
// }

// int main()
// {
//     abc();
// }
// -----------------------------
// 5! = 5x4x3x2x1
// 4! = 4x3x2x1 

// 5! = 5 x 4!
// num! = num x (num-1)!

// 0! = 1 
// 1! = 1
// ---------------------------------------
#include<stdio.h>
int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
    }
}

int main()
{
    int number = 5,ans;
    ans = factorial(number);
    printf("Factorial of %d is %d\n",number,ans);
}

