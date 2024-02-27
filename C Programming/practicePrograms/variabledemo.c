// variable
// a = 1056272;

// rules to create variable
// 1) we cant start variable name with number
// ex  12abc,2bros, 3plane 90city... this are not allowed

// 2) we can user underscore(_) in variable name
// ex; full_name, city_range, roll_number

// 3) we can use letters numbers and unerscre only 
// ex: city_name2; samsung_j7;

// 4 we cant use keyword as a variable

// 5) variables names are case sensative
// a = 12
// A = 15

// age = 10
// Age = 20
// AGE = 30

// =============================
// datatype
// int     - %d - integer - 34,5,245,733,-663,-63247;
// float   - %f - decimal number - 2.5,3.14,5.11 
// char    - %c - charecters - 'd', 'G', '7', '*'

// ==============================

// operators

// a = 10
// b = 20 
// c = a - b


// arithmatic operator
// #include<stdio.h>
// int main()
// {
//     int a = 10,b = 20;
//     printf("%d + %d = %d\n",a,b,a+b) ;
//     printf("%d - %d = %d\n",a,b,a-b) ;
//     printf("%d * %d = %d\n",a,b,a*b) ;
//     printf("%d / %d = %d\n",a,b,a/b) ;
//     printf("%d mod %d = %d\n",a,b,a%b) ;
//     ++a;
//     printf("%d\n",a);
//     --a;
//     printf("%d\n",a);
// }


// logical operator
// and or not
// and - && - (ziddi operator)
// pizza       burger          feel 
// 0           0               0
// 0           1               0
// 1           0               0
// 1           1               1

// or - || - (gareeb manaha manus)
// pizza           burger          feel 
// 0               0               0 
// 0               1               1
// 1               0               1   
// 1               1               1

// not - ! -(ultya khopdi cha)
// 0       -->         1 
// 1       -->         0


// relationship operator
// a = 10
// b = 20
// a > b           -           0
// a < b           -           1
// a == b          -           0
// a != b          -           1
// a <= b          -           1
// a >= b          -           0



// assignment operator
// a = 10
// a = a + 3
// a += 3
// a -= 3
// a *= 3
// a /= 3
// a %= 3



// #include<stdio.h>
// int main()
// {
    // int a = 10;
    // float b = 10.5;
    // char c = 'k';

    // printf("a = %d\n",a);
    // printf("b = %f\n",b);
    // printf("c = %c\n",c);

//     int age;
//     printf("Enter your age = "); 
//     scanf("%d",&age);
//     printf("your age is %d\n",age+1);
// }




#include<stdio.h>
int main()
{
    char a = 'A';
    int b = 20,temp;
    printf("a = %c and b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %c\n",a,b);
    return 0;
}