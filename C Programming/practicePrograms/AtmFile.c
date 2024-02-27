#include<stdio.h>
int readPin()
{
    int data;
    FILE *file;
    file = fopen("pin.txt","r");
    fscanf(file, "%d",&data);
    return data;
}

int readBalance()
{
    int data;
    FILE *file;
    file = fopen("balance.txt","r");
    fscanf(file, "%d",&data);
    return data;
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt","w");
    fprintf(file,"%d",a);
}

void writeBalance(int a)
{
    FILE *file;
    file = fopen("balance.txt","w");
    fprintf(file,"%d",a);
}


int main()
{
	int choice,pin,npin,cpin,bal,upin,amount;
	printf("press the following number to do respective functions\n");
	printf("withdraw=1\t");
	printf(" check balance=2\n");
	printf("change pin=3\t");
	printf(" exit=4\n");
	scanf("%d",&choice);

	if(choice==1)
	{   
		printf("enter your pin=");
		scanf("%d",&upin);
        pin = readPin();
		if(upin==pin)
		{
			printf("enter withdraw amount=");
			scanf("%d",&amount);
            bal = readBalance();
			if(amount>bal)
			{
				printf("**insufficient balance**!");
			}
			else
			{
			printf("withdraw done\n");
			bal=bal-amount;
			printf("balance left = %d",bal);
            writeBalance(bal);
	     	}
		}
		else
		{
			printf("your pin is incorrect\n");
	    }
	}
    else if(choice==2)
	{
		printf("check balance\n");
		printf(" enter your pin=");
		scanf("%d",&upin);
        pin = readPin();
		if(pin==upin)
		{
            bal = readBalance();
			printf("%d",bal);
		}
		else
		{
			printf(" pin is incorrect");
		}
	}
    else if(choice==3)
	{
		printf(" for chaning pin\n");
		printf(" enter your pin=");
		scanf("%d",&upin);
        pin=readPin();
		if(pin==upin)
		{
			printf(" enter new pin=");
			scanf("%d",&npin);
			printf(" confirm new pin=");
			scanf("%d",&cpin);
			if(npin==cpin)
			{
			printf(" congratulations, pin change succefully");
		    writePin(npin);
            }
		    else
		    {
		     printf(" pin is incorrect");
			}
		}
		else
		{
			printf("your pin is incorrect");
		}
	}
   else if(choice==4)
	{
		printf(" thanks for using");
	}
}