// arithmatic operator
// + - * / % ++ --
// #include<stdio.h>
// int main()
// {
//     int a = 10,b = 20;
//     printf("%d\n",a+b);
//     printf("%d\n",a-b);
//     printf("%d\n",a*b);
//     printf("%d\n",a/b);
//     printf("%d\n",a%b);
//     printf("%d\n",++a);
//     printf("%d\n",--a);
// }

// relationship operator
// #include<stdio.h>
// int main()
// {
//     int a = 10,b = 20;
//     printf("%d\n",a>b);
//     printf("%d\n",a<b);
//     printf("%d\n",a<=b);
//     printf("%d\n",a<b);
//     printf("%d\n",a>=b);
//     printf("%d\n",a==b);
//     printf("%d\n",a!=b);
// }


// logical operator
// and or not
// and - && - (ziddi operator)
// rasgulla    panipuri     feel 
// 0               0           0
// 0               1           0
// 1               0           0
// 1               1           1


// or - || - (gareeb mncha manus)
// rasgulla    panipuri         feel 
// 0               0           0
// 0               1           1
// 1               0           1
// 1               1           1
// not - ! -(ultya khopdi cha)
// 0 ---> 1
// 1 ---> 0



// assignment operator
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     a = a + 2;
//     a += 2;
//     a -= 2;
//     a *= 2;
//     a /= 2;
//     a %= 2;
//     printf("%d\n",a);
// }




// -------------------------
#include<stdio.h>
int main()
{
    int a,b;
    printf("allah ke nam pe dede re bava = ");
    scanf("%d + %d",&a,&b);
    // printf("allah ke nam pe dede re bava = ");
    // scanf("%d",&b);

    printf("bhagwan tera bhala kre... tune %d RS diye",a+b);
    return 0;
}
