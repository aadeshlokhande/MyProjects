// #include<stdio.h>
// int main()
// {
//    int a,b;
   
//    printf("A = ");
//    scanf("%d",&a);

//    printf("B = ");
//    scanf("%d",&b);
   
//    printf("%d + %d = %d \n",a,b,a+b);
//    printf("%d - %d = %d \n",a,b,a-b);
//    printf("%d * %d = %d \n",a,b,a*b);
//    printf("%d / %d = %d \n",a,b,a/b);
//    printf("%d mod %d = %d \n",a,b,a%b);

//    return 0;
// }


/*******************************************/
/****** C PROGRAMS BY AADESH LOKHANDE ******/
/*******************************************/

/************AREA OF CIRCLE*****************/
#include<stdio.h>
int main()
{
   int radius;
   float area;
   printf("Enter a radius of circle = ");
   scanf("%d",&radius);
   area = 3.14 * radius * radius;
   printf("Area of Circle = %f",area);
   return 0;
}

/************AREA OF RECTANGLE**************/
#include<stdio.h>
int main()
{
   int length,	Width,area;
   printf("Enter a Value of length and width = ");
   scanf("%d%d",&length,&Width);
   area = length * Width;
   printf("Area of Rectangle = %d",area);
   return 0;
}

/************AREA OF SQUARE*****************/
#include<stdio.h>
int main()
{
   int side,area;
   printf("Enter a Value of side = ");
   scanf("%d",&side);
   area = side * side;
   printf("Area of square = %d",area);
   return 0;
}

/************AVERAGE OF 4 NUMBERS***********/
#include<stdio.h>
int main()
{
   int a1,a2,a3,a4;
   float average;
   printf("Enter four Numbers = ");
   scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
   average = (a1+a2+a3+a4)/4.0;
   printf("Average of four number = %f",average);
   return 0;
}