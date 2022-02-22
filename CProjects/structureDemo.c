#include<stdio.h>
struct name
{
    int a;
    float b;
    // char p;
    char str[100];
};

int main()
{
    struct name abc = {.str = "aadesh"};
    abc.a = 10;
    abc.b = 20.0;
    printf("%s",abc.str);
}