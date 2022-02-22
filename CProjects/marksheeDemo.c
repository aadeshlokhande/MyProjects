// #include<stdio.h>
// int main()
// {
//     int choice, rollNum, sub;
//     int marks[10][6] = {
//         {32,54,65,48,36,25},
//         {42,62,57,84,36,26},
//         {62,45,64,73,54,32},
//         {25,46,36,57,53,26},
//         {26,47,65,44,33,22},
//         {26,45,76,85,38,27},
//         {62,45,64,73,54,32},
//         {25,46,36,57,53,26},
//         {26,47,65,44,33,22},
//         {26,45,76,85,38,27}};
    
//     printf("1: Marks\n2: Result\n3: Whole result\n");
//     printf("Enter your choice = ");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1: 
//             printf("Enter a roll number = ");
//             scanf("%d",&rollNum);
//             printf("0: Hindi\n");
//             printf("1: English\n");
//             printf("2: Maths\n");
//             printf("3: Science\n");
//             printf("4: History\n");
//             printf("5: Geography\n");
//             printf("Enter a subject = ");
//             scanf("%d",&sub);
//             printf("marks = %d\n",marks[rollNum][sub]);
//             break;

//         case 2:
//             printf("Enter a roll number = ");
//             scanf("%d",&rollNum);
//             printf("Marks of Hindi \t\t= %d\n",marks[rollNum][0]);
//             printf("Marks of English \t= %d\n",marks[rollNum][1]);            
//             printf("Marks of Maths \t\t= %d\n",marks[rollNum][2]);
//             printf("Marks of Science \t= %d\n",marks[rollNum][3]);
//             printf("Marks of History \t= %d\n",marks[rollNum][4]);        
//             printf("Marks of Geography \t= %d\n",marks[rollNum][5]);
//             break;

//         case 3:
//             printf("************Whole result************\n");
//             printf("\t\thin\teng\tmath\tsci\this\tgeo\n");
//             for(int i = 0;i<10;i++)
//             {
//                 printf("RollNo. %d\t",i);
//                 for(int j = 0; j<6; j++)
//                 {
//                     printf("%d\t",marks[i][j]);
//                 }
//                 printf("\n");
//             }
//     }
// }



#include<stdio.h>
int main()
{
    int matrix[3][3];
    int count = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j)
            {
                if(matrix[i][j]!=matrix[j][i])
                {
                    ++count;
                }
            }
        }
    }
    if(count==0)
    {
        printf("symetric matrix ahe");
    }
    else 
    {
        printf("symetric matrix nhi ahe");
    }
}