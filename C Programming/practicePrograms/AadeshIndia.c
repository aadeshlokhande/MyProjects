#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter your Name = ");
    scanf("%s",name);
    char flag[10][50] = {"||;;;;;;;;;/ ","||,,,,@,,,,/","||#########/","||","||","||","Happy Republic Day"};
    printf("\n\n");
    for(int i =0;i<=6;i++)
    {
        if(i<6)
        {
            printf("\t\t%s\n",flag[i]);
        }
        else
        {
            printf("\t      %s\n", name);
            printf("\t%s\n",flag[i]);
        }
    }
    
}    