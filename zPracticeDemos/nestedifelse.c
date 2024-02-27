// Nested if else

// if(condition)
// {
//     statements;
//     if(condition)
//     {
//         statements;
//     }
//     else 
//     {
//         statements;
//     }
// }
// else 
// {
//     statements;
//     if(condition)
//     {
//         statements;
//     }
//     else 
//     {
//         statements;
//     }
// }


// if(condition)
// {
//     statements;
//     if(condition)
//     {
//         statements;
//         if(condition)
//         {
//             statements;
//         }
//         else 
//         {
//             statements;
//         }
//     }
//     else 
//     {
//         statements;
//     }
// }
// else 
// {
//     statements;
// }




// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if(age>0 && age<=80)
//     {
//         if(age>18)
//         {
//             printf("you can drive");
//         }
//         else
//         {
//             printf("you can't drive");
//         }
//     }
//     else
//     {
//         printf("invalid age");
//     }
//     return 0;
// }


// =================================

// budget >= 7000
// fds >= 7
// permission == 1 



#include<stdio.h>
#include<string.h>
int main()
{
    int budget, fds, permission;
    printf("kitna budget hai = ");
    scanf("%d",&budget);
    if(budget>=7000)
    {
        printf("kitne fds hai = ");
        scanf("%d",&fds);
        if(fds>=7)
        {
            printf("ghar ki permission hai kya = ");
            scanf("%d",&permission);
         
            if(permission==1)
            {
                printf("tum goa ja sakte ho");
            }

            else
            {
                printf("goa nahi ja sakte");
            }
        }
        else
        {
            printf("plan cancel");
        }
    }
    else
    {
        printf("bhag bhikmange");
    }
    return 0;
}



