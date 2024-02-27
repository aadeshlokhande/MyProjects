// merksheet
// marks[20][6] = {
//     {12,23,34,54,65,76},
//     {12,23,34,54,65,76},
//     {12,23,34,54,65,76}
//     .
//     .
//     .
// };


#include<stdio.h>
int main()
{
    int mark[20][6] = {
        {32,54,65,87,45,36},
        {23,54,76,45,24,23},
        {54,32,54,45,76,36},
        {43,65,76,34,23,54},
        {32,54,65,87,45,36},
        {23,54,76,45,24,23},
        {54,32,54,45,76,36},
        {43,65,76,34,23,54},
        {32,54,65,87,45,36},
        {23,54,76,45,24,23},
        {54,32,54,45,76,36},
        {43,65,76,34,23,54},
        {32,54,65,87,45,36},
        {23,54,76,45,24,23},
        {54,32,54,45,76,36},
        {43,65,76,34,23,54},
        {32,54,65,87,45,36},
        {23,54,76,45,24,23},
        {54,32,54,45,76,36},
        {43,65,76,34,23,54}
    };

    int rollNo,subCode,choice;

    printf("Press 1 : mark\n");
    printf("Press 2 : result\n");
    printf("Press 3 : Whole result\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter a roll number = ");
            scanf("%d",&rollNo);

            printf("Press 0 : marathi\n");
            printf("Press 1 : hindi\n");
            printf("Press 2 : english\n");
            printf("Press 3 : maths\n");
            printf("Press 4 : science\n");
            printf("Press 5 : history\n");
            printf("Enter a subject code = ");
            scanf("%d",&subCode);

            printf("Marks = %d\n",mark[rollNo][subCode]);
            break;
        
        case 2:
            printf("Enter a roll number = ");
            scanf("%d",&rollNo);
            
            printf("marathi     = %d\n",mark[rollNo][0]);
            printf("hindi       = %d\n",mark[rollNo][1]);
            printf("english     = %d\n",mark[rollNo][2]);
            printf("maths       = %d\n",mark[rollNo][3]);
            printf("science     = %d\n",mark[rollNo][4]);
            printf("history     = %d\n",mark[rollNo][5]);
            break;

        case 3:
            printf("\t\tmar\thin\teng\tmath\tsci\this\n");
            for(int i =0; i<20; i++)
            {
                printf("RollNo %d\t",i);
                for(int j = 0; j<6; j++)
                {
                    printf("%d\t",mark[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("invalid choice");
    }

}
