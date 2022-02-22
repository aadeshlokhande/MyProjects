// #include <stdio.h>
// #include <time.h>
// #include <stdint.h>
 
// int main(void)
// {
    
//     while (1)
//     {
//     time_t result = time(NULL);
//     if(result != (time_t)(-1))
//         printf("%s\n",asctime(gmtime(&result)));
//     }
// }


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    srand(time(NULL));
    int random_variable = rand();
    int x;
    x = 1 + rand()/((RAND_MAX + 1u)/10);
    printf("%d ",  x); 
 
}


