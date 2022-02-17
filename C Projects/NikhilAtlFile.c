#include<stdio.h>
// #include<conio.h>
int main()
{
 int a[10],pin[2],balance,bal;
 printf("press the following number to do respective functions\n");
 printf("withdraw=1\t");
 printf(" check balance=2\n");
 printf("change pin=3\t");
 printf(" exit=4\n");
 scanf("%d",&a[0]);

 if(a[0]==1)
 {   
  printf("enter your pin=");
  scanf("%d",&pin[0]);
  if(pin[0]==1234)
  {
   printf("enter withdraw amount=");
   scanf("%d",&a[4]);
   FILE*fileptr;
   int b;
   fileptr=fopen("balance.txt","r");
   fscanf(fileptr,"%d",&b);
   printf("%d",b);
   fclose(fileptr);
  
   if(a[4]>balance)
   {
    printf("insufficient balance!");
   }
   else
   {
   printf("withdraw done\n");
   bal=balance-a[4];
   printf("balance left = %d",bal);
   FILE*file;
   file=fopen("balance.txt","w");
   fprintf(file,"%d",balance);
   fclose(file);
  
       }
  }
  else
  {
   printf("your pin is incorrect\n");
   printf(" ****please try again***\n");
   printf("press pin again=");
   scanf("%d",&pin[0]);
   
          if(pin[0]==1234)
       {
       printf("enter withdraw amount=");
       scanf("%d",&a[4]);
       if(a[4]>balance)
     {
    printf("insufficient balance!");
     } 
     
     else
     {
       printf("withdraw done\n");
       bal=balance-a[4];
       printf("balance left = %d",balance);
         }
        }
        
      else
     {
   printf("your pin is incorrect\n");
   printf("your card is block");  
        }
    }
 }
 
    else if(a[0]==2)
 {
  printf("check balance\n");
  printf(" enter your pin=");
  scanf("%d",&pin[0]);
  if(pin[0]==1234)
  {
   FILE*fileb;
   int c;
   fileb=fopen("balance.txt","r");
   fscanf(fileb,"%d",&c);
   printf("your balance is %d",c);
   fclose(fileb);
   return 0;
  }
  else
  {
   printf(" pin is incorrect");
  }
 }
   else if(a[0]==3)
 {
  printf(" for chaning pin\n");
  printf(" enter your pin=");
  scanf("%d",&pin[0]);
   FILE*fill;
   int d;
   fill=fopen("pin","r");
   fscanf(fill,"%d",&d);
   printf("%d\n",d);
   fclose(fill);
  
  if(pin[0]==d)
  {
   printf(" enter new pin=");
   scanf("%d",&pin[1]);
   printf(" confirm new pin=");
   scanf("%d",&pin[2]);
   if(pin[1]==pin[2])
   {
   printf(" congratulations, pin change succefully");
   FILE*fill;
   fill=fopen("pin","w");
   fprintf(fill,"%d",pin[1]);
   fclose(fill);
   
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
   else if(a[0]==4)
 {
  printf(" thanks for using");
 }
 
}