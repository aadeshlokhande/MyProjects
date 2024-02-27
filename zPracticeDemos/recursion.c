// Recursion

// #include<stdio.h>
// void hello(int a)
// {
//     if(a>=1)
//     {
//         printf("hello ");
//         hello(a-1);
//     }
// }

// int main()
// {
//     hello(10);
//     return 0;
// }

// =====================================

// 5! = 5x4x3x2x1
// 4! = 4x3x2x1 

// 5! = 5 x 4!
// n! = n x (n-1)!

// 1! = 1 
// 0! = 1 

// #include<stdio.h>

// int factorial(int a)
// {
//     if(a==1 || a==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return a * factorial(a-1);
//     }
// }



// int main()
// {
//     int num,ans;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     ans = factorial(num);
//     printf("ans = %d",ans);

//     return 0;
// }



// ======================================

// Marksheet


// marks[20][6] = {
//     {54,43,76,35,76,77},
//     {55,75,33,87,34,87},
//     {45,87,46,35,23,54},
//     .
//     .
//     .

// };


// press 1 : marks
//     enter roll number = 1
//     press 0 : marathi
//     press 1 : hindi
//     press 2 : English
//     .
//     .
//     enter a sub code = 2
//     marks = 33

// press 2 : result
//     enter roll number = 1
//     marathi = 
//     hindi = 
//     english = 
//     .
//     .
//     .

// press 3 : whole result
//                 mar     hin     eng     his     sci     math 
// roll No 0       12      78      78      56      45      34
// roll No 1       12      78      78      56      45      34
// roll No 2       12      78      78      56      45      34
// roll No 3       12      78      78      56      45      34
// roll No 4       12      78      78      56      45      34
// roll No 5       12      78      78      56      45      34
// .
// .
// .
// roll No 19       12      78      78      56      45      34

















