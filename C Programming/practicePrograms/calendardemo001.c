#include <stdio.h>
int main()
{ 
   int num; 
   printf("enter a number =");
   scanf ("%d",&num); 
   num = num%7;
   if (num==1) 
	{ 
	    printf ("monday");
	} 
	    else if(num==2)
	{ 
	    printf ("tuesday");
	}   
	    else if (num==3)
	{    
	    printf  ("wednesday");
	} 
	    else if(num==4) 
	{
	    printf ("thursday"); 
	}
	    else if (num==5)
	{
	    printf("friday");
	}
	    else if (num==6)
	{
	    printf ("saturday");
	}
	    else 
	{
	    printf ("sunday"); 
	}
   
   return 0;
}