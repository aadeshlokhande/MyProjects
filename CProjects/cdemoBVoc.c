// #include<stdio.h>
// #include - preprocessing command
// stdio.h - library
// .h - extension
// int main() //int - datatype, main() - function
// {   
    // printf("good afternoon \n");
   //statements
    // return 0;
   //returning value
// }

// commnets - notes
//single line comment
/* this
is
my
multi
line
coments
*/

// whitespace - blankspaces

// semicolon - fullstop, statement terminator

// keywords - 32 - reserve words
// auto	break	case	char
// const	continue	default	do
// double	else	enum	extern
// float	for	goto	if
// int	long	register	return
// short	signed	sizeof	static
// struct	switch	typedef	union
// unsigned	void	volatile	while





// ----------------------------------------------------------
// ----------If else Programs by Aadesh Lokhande-------------
// ----------------------------------------------------------

// ************Positive OR Nagative by Aadesh Lokhande*******************
// Algorithm
// step 1 : START 
// step 2 : Define variable number as integer
// step 3 : get value from user 
// step 4 : check whether number>0
//             if true then go to step no. 5
//             if false then go to step no. 6
// step 5 : print "number is positive"
//             then go to step no. 9
// step 6 : check whether number<0
//             if true then go to step no. 7
//             if false then go to step no. 8
// step 7 : print "number is nagative"
//             then go to step no. 9
// step 8 : print "number is zero"
// step 9 : STOP

//  Program
// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("*****Positve OR Nagative*****\n");
//     printf("Enter a number = ");
//     scanf("%d",&number);
//     if(number>0)
//     {
//         printf("%d is Positive Number\n",number);
//     }
//     else if(number<0)
//     {
//         printf("%d is Nagative Number\n",number);
//     }
//     else 
//     {
//         printf("%d is zero\n",number);
//     }
//     return 0;
// }



// ***************Greatest Among Two Numbers****************
// Algorithm
// step 1 : START 
// step 2 : Define variable number1 and number2 as integer 
// step 3 : get values from user in number1 nd number2
// step 4 : check whether number1>number2
//             if true then go to step no. 5
//             if false then go to step no. 6
// step 5 : print "number1 is greater"
//             then go to step no. 9
// step 6 : check whether number1<number2
//             if true then go to step no. 7
//             if false then go to step no. 8
// step 7 : print "number2 is greater"
//             then go to step no. 9
// step 8 : print "Both are same"
// step 9 : STOP 


// Program
// #include<stdio.h>
// int main()
// {
//     int number1, number2;
//     printf("*****Greatest Among Two Numbers*****\n");
//     printf("Enter a first number = ");
//     scanf("%d",&number1);
//     printf("Enter a second number = ");
//     scanf("%d",&number2);
//     if(number1>number2)
//     {
//         printf("%d is Greater Number\n",number1);
//     }
//     else if(number1<number2)
//     {
//         printf("%d is Greater Number\n",number2);
//     }
//     else
//     {
//         printf("Both are same numbers");
//     }
//     return 0;
// }


// **************Smallest Among Two Number***********
// Algorithm
// step 1 : START 
// step 2 : Define variable number1 and number2 as integer 
// step 3 : get values from user in number1 nd number2
// step 4 : check whether number1<number2
//             if true then go to step no. 5
//             if false then go to step no. 6
// step 5 : print "number1 is Smaller"
//             then go to step no. 9
// step 6 : check whether number1>number2
//             if true then go to step no. 7
//             if false then go to step no. 8
// step 7 : print "number2 is Smaller"
//             then go to step no. 9
// step 8 : print "Both are same"
// step 9 : STOP 

// Program
// #include<stdio.h>
// int main()
// {
//     int number1, number2;
//     printf("*****Smallest Among Two Numbers*****\n");
//     printf("Enter a first number = ");
//     scanf("%d",&number1);
//     printf("Enter a second number = ");
//     scanf("%d",&number2);
//     if(number1<number2)
//     {
//         printf("%d is Smallest Number\n",number1);
//     }
//     else 
//     {
//         printf("%d is Smallest Number\n",number2);
//     }
//     return 0;
// }



// ***********************EVEN OR ODD *********************
// Algorithm
// step 1 : START 
// step 2 : define variable number as integer
// step 3 : get value from user and store it in number variable
// step 4 : check whether number%2==0
//             if true go to step no. 5 
//             if false go to step no. 6
// step 5 : print "Number is Even"
//             go to step no. 7
// step 6 : print "Number is odd"
// step 7 : STOP

// Program
// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("******Even Or Odd******\n");
//     printf("Enter a numer = ");
//     scanf("%d",&number);
//     if(number%2==0)
//     {
//         printf("%d id Even Number");
//     }
//     else
//     {
//         printf("%d is Odd Number");
//     }
//     return 0;
// }



// *****Greater Number Bitween Three Numbers by Aadesh Lokhande*****
// Algorithm
// step 1 : START 
// step 2 : define variable a,b and c as integer 
// step 3 : get values from user in a,b and c
// step 4 : check whether a>b 
//             if true go to step number 5
//             if false go to step number 8
// step 5 : check whether a>c 
//             if true go to step number 6
//             if false go to step number 7
// step 6 : print "a is greater"
//             then go to step number 11
// step 7 : print "c is greater"
//             then go to step number 11
// step 8 : check whether b>c 
//             if true go to step number 9
//             if false go to step nuber 10
// step 9 : print "b is greater"
//             then go to step number 11
// step 10 : print "c is greater"
// step 11 : STOP

// Flowchart

// Program
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter Three Numbers = ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("%d is Greater Number",a);
//         }
//         else
//         {
//             printf("%d is Greater Number",c);
//         }
//     }
//     else
//     {
//         if(b>c)
//         {
//             printf("%d is Greater Number",b);
//         }
//         else
//         {
//             printf("%d is Greater Number",c);
//         }
//     }
//     return 0;
// }



// *****Calculator Program using switch case by Aadesh Lokhande*****
#include<stdio.h>
int main()
{
    int a,b,c;
    char choice;
    printf("**********CALCULATOR*********\n");
    printf("Press %c : Addition\n",'+');
    printf("Press %c : Substraction\n",'-');
    printf("Press %c : Multiplication\n",'*');
    printf("Press %c : Division\n",'/');
    printf("Press %c : Modulus\n",'%');
    printf("Press %c : Even Or Odd\n",'e');
    printf("Enter your choice = ");
    scanf("%c",&choice);

    switch(choice)
    {
        case '+' :
            printf("Enter two numbers for Addition =");
            scanf("%d%d",&a,&b);
            c = a + b;
            printf("%d + %d = %d\n",a,b,c);
            break;
        
        case '-' :
            printf("Enter two numbers for Substraction =");
            scanf("%d%d",&a,&b);
            c = a - b;
            printf("%d - %d = %d\n",a,b,c);
            break;

        case '*' :
            printf("Enter two numbers for Multiplication =");
            scanf("%d%d",&a,&b);
            c = a * b;
            printf("%d x %d = %d\n",a,b,c);
            break;
        
        case '/' :
            printf("Enter two numbers for Division =");
            scanf("%d%d",&a,&b);
            c = a / b;
            printf("%d / %d = %d\n",a,b,c);
            break;
        
        case '%' :
            printf("Enter two numbers for Modulus =");
            scanf("%d%d",&a,&b);
            c = a % b;
            printf("%d mod %d = %d\n",a,b,c);
            break;
        
        case 'e' :
            printf("Enter number for check Even or Odd =");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("%d is Even Number\n",a);
            }
            else
            {
                printf("%d is Odd Number",a);
            }
            break;
    }
    return 0;
}