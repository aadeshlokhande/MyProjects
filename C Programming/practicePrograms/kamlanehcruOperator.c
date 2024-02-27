// arithmatic
// +,-,*,/,%,++,--
#include<stdio.h>
int main()
{
    int a = 10,b=20,c;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d mod %d = %d\n",a,b,a%b); // reminder
    a = a + 1;
    c = ++a;
    printf("a = %d and c = %d\n",a,c);
    c = a++;
    printf("a = %d and c = %d\n",a,c);
    c = --a;
    printf("a = %d and c = %d\n",a,c);
    c = a--;
    printf("a = %d and c = %d\n",a,c);
}

// relationship 
#include<stdio.h>
int main()
{
    int a = 10,b=10;
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
}



// logical 
// assignment














