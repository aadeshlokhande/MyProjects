// while loop 

// while (condition)
// {
//     statements;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while (a<10)
//     {
//         printf("Heddy ");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while (a<10)
//     {
//         printf("Heddy ");
//         a++;
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int icecream = 1;
//     while (icecream!=0)
//     {
//         printf("kitne icecream khana hai = ");
//         scanf("%d",&icecream);
//     }
//     printf("\nthik hai mai shop band kr raha hu....");
// }



#include<stdio.h>
int main()
{
    int num1,num2, add = 1;
    while (add!=0)
    {
        printf("Enter a number = ");
        scanf("%d",&num1);
        printf("Enter a number = ");
        scanf("%d",&num2);
        add = num1 + num2;
        printf("addition is %d\n",add);
    }
}

