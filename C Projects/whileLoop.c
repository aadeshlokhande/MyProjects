/*
while loop syntax:- 

while(cond)
{
    code;
}
*/


// #include<stdio.h>
// int main()
// {
//     int a=1;

//     while (a<=10)
//     {
//         print("Vivek\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int hin,mar,eng,math,sci,his;
//     float per;

//     printf("Enter a marks of Hindi = ");
//     scanf("%d",&hin);
//     printf("Enter a marks of Marathi = ");
//     scanf("%d",&mar);
//     printf("Enter a marks of English = ");
//     scanf("%d",&eng);
//     printf("Enter a marks of Maths = ");
//     scanf("%d",&math);
//     printf("Enter a marks of Science = ");
//     scanf("%d",&sci);
//     printf("Enter a marks of History = ");
//     scanf("%d",&his);

//     if(hin>40)
//     {
//         printf("you are fail in Hindi\n");
//     }
//     if(mar>40)
//     {
//         printf("you are fail in Marathi\n");
//     }
//     if(eng>40)
//     {
//         printf("you are fail in English\n");
//     }
//     if(sci>40)
//     {
//         printf("you are fail in Science\n");
//     }
//     if(math>40)
//     {
//         printf("you are fail in Maths\n");
//     }
//     if(his>40)
//     {
//         printf("you are fail in History\n");
//     }

//     per = ((hin+mar+eng+sci+math+his)/600.0)*100;
//     printf("percentage = %f\n",per);

//     if(per>=80)
//     {
//         printf("you are pass in Distinction\n");
//     }

//     if(per>=60 && per<80)
//     {
//         printf("you are pass in First Division\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a1, a2,div, mod;

//     printf("Enter the 1st value = ");
//     scanf("%d",&a1);

//     printf("Enter the 2nd value = ");
//     scanf("%d",&a2);

//     div = a1/a2;
//     mod = a1%a2;

//     printf("div = %d\nmod = %d",div,mod);
//     return 0;
// }






#include<stdio.h>
int main()
{
    int age;
    printf("Santa \t: Boss mujhe ​retired hona hai\n");
    printf("Boss \t: thik hai.... santa apki age kitni hai...\n");
    printf("Santa \t: Boss meri age hai ");
    scanf("%d",&age);

    if(age>=65)
    {
        printf("Boss \t: thik hai santa aap retirement le sakte ho\n");
    }
    else
    {
        printf("Boss \t: Sorry santa.. apki age jab tak 65+ nhi hoti hum apko retirement nhi de sakte\n");
    }

    printf("Santa \t: Ok sir...\n");
    return 0;
}

// ===========================OUTPUT==================================
// case 1:- if condition is true
// Santa   : Boss mujhe ​retired hona hai
// Boss    : thik hai.... santa apki age kitni hai...
// Santa   : Boss meri age hai 58
// Boss    : Sorry santa.. apki age jab tak 65+ nhi hoti hum apko retirement nhi de sakte
// Santa   : Ok sir...

// case 2:- if condition id false 
// Santa   : Boss mujhe ​retired hona hai
// Boss    : thik hai.... santa apki age kitni hai...
// Santa   : Boss meri age hai 67
// Boss    : thik hai santa aap retirement le sakte ho
// Santa   : Ok sir...