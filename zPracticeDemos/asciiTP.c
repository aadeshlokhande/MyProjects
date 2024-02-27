#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = {115, 121, 115, 116, 101, 109, 32, 102, 104, 97, 100, 32, 100, 101, 110, 103, 101};
    int num = strlen(str);

    printf("%s",str);
    return 0;
}