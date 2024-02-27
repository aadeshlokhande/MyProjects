// nested for loop
// for(init; cond; inc/dec)
// {
//     statements;
//     for (init; cond; inc/dec)
//     {
//         statements;
//     }
//     statements;
// }


// example
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j <=5; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j <=5; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*\t");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Tables
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=10;i++)
//     {
//         for(int j = 1;j<=10;j++)
//         {
//             printf("%d\t",i*j);
//         }
//         printf("\n");
//     }
// }