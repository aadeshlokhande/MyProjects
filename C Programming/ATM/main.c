#include<stdio.h>

int readPin()
{
    int a;
    FILE *file;
    file = fopen("pin.txt","r");
    fscanf(file,"%d",&a);
    fclose(file);
    return a;
}

int readBal()
{
    int a;
    FILE *file;
    file = fopen("bal.txt","r");
    fscanf(file,"%d",&a);
    fclose(file);
    return a;
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt","w");
    fprintf(file,"%d",a);
    fclose(file);
}

void writeBal(int a)
{
    FILE *file;
    file = fopen("bal.txt","w");
    fprintf(file,"%d",a);
    fclose(file);
}

int main()
{
    int pin,bal,upin,npin,cpin,amount,choice;
    printf("Press 1 : withdraw\n");
    printf("Press 2 : Check balance\n");
    printf("Press 3 : change pin\n");
    printf("Press 4 : Deposite\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("enter your pin = ");
        scanf("%d",&upin);
        pin = readPin();

        if(pin==upin)
        {
            printf("enter a amount = ");
            scanf("%d",&amount);
            bal = readBal();
            if(amount<bal)
            {
                bal = bal-amount;
                writeBal(bal);
                printf("Transaction successfull\n");
                printf("current bal = %d\n",bal);
            }
            else
            {
                printf("insuficient Balance\n");
            }
        }
        else
        {
            printf("wrong pin\n");
        }
    }
    else if(choice==2)
    {
        printf("enter your pin = ");
        scanf("%d",&upin);
        pin = readPin();

        if(pin==upin)
        {
            bal = readBal();
            printf("current bal = %d\n",bal);
        }
        else
        {
            printf("wrong pin\n");
        }
    }
    else if(choice==3)
    {
        printf("enter your pin = ");
        scanf("%d",&upin);
        pin = readPin();

        if(pin==upin)
        {
            printf("Enter your new pin = ");
            scanf("%d",&npin);
            printf("Confirm your pin = ");
            scanf("%d",&cpin);
            if(npin==cpin)
            {
                writePin(npin);
                printf("pin changed successfully\n");
            }
            else
            {
                printf("pin doesn't match");
            }
        }
        else
        {
            printf("wrong pin\n");
        }
    }
    else if(choice==4)
    {
        printf("enter your pin = ");
        scanf("%d",&upin);
        pin = readPin();

        if(pin==upin)
        {
            printf("Enter a amount = ");
            scanf("%d",&amount);
            bal = readBal();
            bal = amount + bal;
            writeBal(bal);
            printf("current bal = %d\n",bal);
        }
    }
    printf("********* Thanks for using our service **********\n");
}