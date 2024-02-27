// swaping 2 number 

// a = 10
// b = 20 
// c 

#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    // int temp;

    printf("a = %d and b = %d\n",a,b);

    // swaping values using 3rd variable
    // temp = a;
    // a = b;
    // b = temp;

    // swaping values without using 3rd variable
    a = a + b;              // a = 30
    b = a - b;              // b = 10
    a = a - b;              // a = 20

    printf("a = %d and b = %d\n",a,b);

    return 0;
}



#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf("enter a number of biscuits =");
    scanf("%d",&a);
    printf("enter a number of dogs = ");
    scanf("%d",&b);
    c=a/b;
    d=a%b;
    printf(" biscuits eaten by one dog =%d\n",c);
    printf("remaining biscuits= %d",d);
}



#include <stdio.h>
int main()
{ 
    int num;  
    printf("enter the number =");
    scanf("%d",&num);

    num = num % 7;

    if(num==1)
    {
        printf("monday");
    }
    else if(num==2)
    {
        printf("tuesday");
    }
    else if (num==3)
    {
        printf("wednesday");
    }
    else if( num==4)
    {
        printf ("thrusday");
    }
    else if ( num==5)
    {
        printf("friday");
    }
    else if ( num==6)
    {
        printf("saturday");
    }
    else if (num==0)
    {
        printf("sunday");
    }
    else
    {  
        printf("day not found");
    }
    return 0;
}


// ==================================
#include<stdio.h>
int main()
{
    int per;
    printf("Enter a percent = ");
    scanf("%D",&per);
    if(per>=0 && per<35)
    {
        printf("Fail");
    }
    else if(per>=35 && per < 70)
    {
        printf("C grade");
    }
    else if(per>=70 && per<80)
    {
        printf("B grade");
    }
    else if (per>=80 && per<90)
    {
        printf("A grade");
    }
    else if(per>=90 && per<=100)
    {
        printf("A+ grade");
    }
    else
    {
        printf("invalid per");
    }
    return 0;
}






