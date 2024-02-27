#include<stdio.h>
int main()
{
    int bananas, remain,give;
    printf("how many bananas you have = ");
    scanf("%d",&bananas);
    give = bananas/6;
    remain = bananas%6;
    printf("\n\nbananas = %d\nremain = %d\ngive = %d\n",bananas,remain,give);
    return 0;
}


