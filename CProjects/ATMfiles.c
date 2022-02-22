#include <stdio.h>
void writePin(int a)
{
    FILE *fileptr;
    fileptr = fopen("pin.txt", "w");
    fprintf(fileptr, "%d",a);
    fclose(fileptr);
}

void writeBalance(int a)
{
    FILE *fileptr;
    fileptr = fopen("balance.txt", "w");
    fprintf(fileptr, "%d",a);
    fclose(fileptr);
}

int readBalance()
{
    FILE *pop;
    int bal;
    pop = fopen("balance.txt", "r");
    fscanf(pop, "%d",&bal);
    fclose(pop);
    return bal;
}

int readPin()
{
    FILE *pop;
    int pin;
    pop = fopen("pin.txt", "r");
    fscanf(pop, "%d",&pin);
    fclose(pop);
    return pin;
}

int main()
{
    int choice, upin, pin, amount, balance, npin, cpin;
    printf("1 : Withdraw\n");
    printf("2 : Check Balance\n");
    printf("3 : Change Pin\n");
    printf("4 : Exit\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("Enter a pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if (pin==upin)
            {
                printf("Enter a amount = ");
                scanf("%d",&amount);
                balance = readBalance();
                if(balance>amount)
                {
                    printf("Transaction successfull\n");
                    balance = balance - amount ;
                    printf("current balance = %d",balance);
                    writeBalance(balance);

                }
                else 
                {
                    printf("Insufficient Balance\n");
                }
            }
            else
            {
                printf("Wrong Pin\n");
            }
            break;
        
        case 2 :
            printf("Enter a pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if (pin==upin)
            {
                balance = readBalance();
                printf("Current balance = %d\n",balance);
            }
            else
            {
                printf("Wrong pin\n");
            }
            break;
        
        case 3:
            printf("Enter a pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if (pin==upin)
            {
                printf("Enter your new pin = ");
                scanf("%d",&npin);
                printf("Confirm your pin = ");
                scanf("%d",&cpin);
                if(npin==cpin)
                {
                    printf("pin changed successfully\n");
                    writePin(npin);
                }
                else 
                {
                    printf("pin Dosen't match\n");
                }
            }
            else
            {
                printf("Wrong Pin...\n");
            }
            break;
        
        case 4 :
            printf("Thanks for using our service...\n");
            break;
            
    }
}














// android development 
// java
// kotlin 
// flutter 
// swift
// kivy
