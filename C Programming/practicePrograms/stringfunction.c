// string function
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "pragati";
    char str[20] = "pragati";
    // int a = strlen(name);
    // printf("lenght of str = %d",a);
    
    // strcpy(str, name);
    // printf("%s",str);
    
    // strcat(name,str);
    // printf("%s",name);
    int a;
    a = strcmp(name,str);  
    
    printf("%d",a);
    
}