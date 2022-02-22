// #include<stdio.h>
// int main()
// {
// 	int a[10],pin[2]={1234},bal[1]={5000};
// 	printf("press the following number to do respective functions\n");
// 	printf("withdraw=1\t");
// 	printf(" check balance=2\n");
// 	printf("change pin=3\t");
// 	printf(" exit=4\n");
// 	scanf("%d",&a[0]);

// 	if(a[0]==1)
// 	{   
// 		printf("enter your pin=");
// 		scanf("%d",&pin[0]);
// 		if(pin[0]==1234)
// 		{
// 			printf("enter withdraw amount=");
// 			scanf("%d",&a[4]);
// 			if(a[4]>bal[0])
// 			{
// 				printf("**insufficient balance**!");
// 			}
// 			else
// 			{
// 			printf("withdraw done\n");
// 			bal[1]=bal[0]-a[4];
// 			printf("balance left = %d",bal[1]);
// 	     	}
// 		}
// 		else
// 		{
// 			printf("your pin is incorrect\n");
// 			printf(" ****please try again***\n");
// 			printf("press pin again=");
// 			scanf("%d",&pin[0]);
			
// 	        	if(pin[0]==1234)
// 	     	{
// 			    printf("enter withdraw amount=");
// 		    	scanf("%d",&a[4]);
// 			    if(a[4]>bal[0])
// 			  {
// 				printf("**insufficient balance**!");
// 			  } 
			  
// 			  else
// 			  {
// 			    printf("withdraw done\n");
// 			    bal[1]=bal[0]-a[4];
// 			    printf("balance left = %d",bal[1]);
// 	     	  }
// 	       }
	       
// 		    else
// 		   {
// 			printf("your pin is incorrect\n");
// 			printf("your card is block");	 
// 	       }
// 	   }
// 	}
	
//     else if(a[0]==2)
// 	{
// 		printf("check balance\n");
// 		printf(" enter your pin=");
// 		scanf("%d",&pin[0]);
// 		if(pin[0]==1234)
// 		{
// 			printf("%d",bal[0]);
// 		}
// 		else
// 		{
// 			printf(" pin is incorrect");
// 		}
// 	}
//    else if(a[0]==3)
// 	{
// 		printf(" for chaning pin\n");
// 		printf(" enter your pin=");
// 		scanf("%d",&pin[0]);
// 		if(pin[0]==1234)
// 		{
// 			printf(" enter new pin=");
// 			scanf("%d",&pin[1]);
// 			printf(" confirm new pin=");
// 			scanf("%d",&pin[2]);
// 			if(pin[1]==pin[2])
// 			{
// 			printf(" congratulations, pin change succefully");
// 		    }
// 		    else
// 		    {
// 		     printf(" pin is incorrect");
// 			}
// 		}
// 		else
// 		{
// 			printf("your pin is incorrect");
// 		}
// 	}
//    else if(a[0]==4)
// 	{
// 		printf(" thanks for using");
// 	}
// }



#include<stdio.h>
int main()
{
      int sub,roll;
      int rol[10]={1,2,3,4,5,6,7,8,9,10};
    int mark[10][6] = {
        {12,32,43,65,54,35},
        {45,35,22,77,65,53},
        {54,36,25,14,24,45},
        {45,63,25,46,36,26},
        {54,36,25,14,24,45},
        {45,35,22,77,65,53},
        {45,63,25,46,36,26},
        {54,36,25,14,24,45},
        {12,32,43,65,54,35},
        {45,63,25,46,36,26}};
                        
    int a;
    printf(" press following keys for following function\n\n");
    printf("1:marks of one sub\n2:result\n3:whole result\n");
    scanf("%d",&a);
    char su[10][7]={"hindi","eng","math","sci","his","geo"};
    
    switch(a)
  {
    
    case 1:
   
    printf("Enter a roll number = ");
    scanf("%d",&roll);
    printf("1:hindi\n2:eng\n3:math\n4:sci\n5:his\n6:geo\n");
    printf("Enter your sub = ");
    scanf("%d",&sub);
    --sub;
    
    if(sub==0)
    {
        printf("roll number = %d\nsubect = hindi\nmarks = %d",roll,mark[roll][sub]);
    }
    else if(sub==1)
    {
        printf("roll number = %d\nsubect = english\nmarks = %d",roll,mark[roll][sub]);
    }
    else if(sub==2)
    {
        printf("roll number = %d\nsubect = math\nmarks = %d",roll,mark[roll][sub]);
    }
    else if(sub==3)
    {
        printf("roll number = %d\nsubect = science\nmarks = %d",roll,mark[roll][sub]);
    }
    else if(sub==4)
    {
        printf("roll number = %d\nsubect = history\nmarks = %d",roll,mark[roll][sub]);
    }
    else if(sub==5)
    {
        printf("roll number = %d\nsubect = geography\nmarks = %d",roll,mark[roll][sub]);
    }
    else 
    {
        printf("wrong input");
    }
    
    break;
    
    case 2:
    printf("\t*** result **\n");
    printf(" enter your roll number=\n");
    scanf("%d",&roll);
    
    for( int i=0; i<6; i++)
    {
        printf("%s=%d\n",su[i],mark[roll][i]);
    }
    break;
    case 3:
   
    printf("\t**whole result**\n");
    
    printf("\t\thindi\tenglish\tmath\tscience\thistory\tgeography\n");
    
    for(int j=0; j<10; j++)
    {
        printf("Roll Number = %d",j);
        for(int k=0; k<6; k++)
        {
            printf("  %d\t",mark[j][k]);
        }
        printf("\n");
    }
    
  }
  
  
}