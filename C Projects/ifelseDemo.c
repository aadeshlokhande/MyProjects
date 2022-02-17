// if else 
// if else ladder 
// nested if 



// nested if else
// if(condition)
// {
//     statements;
//     if(condtion)
//     {
//         statements;
//         if(condition)
//         {
//             statements
//         }
//         else
//         {
//             statements
//         }
//     }
//     else
//     {
//         statements;
//     }
// }
// else 
// {
//     statements
// }

// Example
// chalo mall ghumne chalte 
// paise
// mask
// vaccination
#include<stdio.h>
int main()
{
    int paise,mask,dose;
    printf("mask hai kya 1/0 = ");
    scanf("%d",&mask);
    if(mask==1)
    {
        printf("kitne dose complete hai = ");
        scanf("%d",&dose);
        if(dose==2)
        {
            printf("paise kitne hai = ");
            scanf("%d",&paise);
            if(paise>5000)
            {
                printf("Welcome to Aishwarya mall");
            }
            else 
            {
                printf("bhag ja yaha se bhikmange\ndubara apni shakal mat dikhana\n");
            }
        }
        else
        {
            printf("Marna hai tereko... ja dose complete kr");
        }
    }
    else 
    {
        printf("khud bhi marega aur dusro ko bhi marwayga");
    }
    return 0;
}

