// pointer

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *ptr;
//     ptr = &a;
//     printf("value of a = %d\n",a);
//     printf("address of a = %p\n",&a);
//     printf("value of PTR = %p\n",ptr);
//     printf("address of ptr = %p\n",&ptr);
//     return 0;
// }




// pointer

#include <stdio.h>
int main()
{
    int asha = 20;
    int *chintu;
    chintu = &asha;
    printf("age of asha = %d\n",asha);
    printf("address of asha = %p\n",&asha);
    printf("value of chintu = %p\n",chintu);
    printf("address of chintu = %p\n",&chintu);
    printf("value of *chintu = %d\n",*chintu);
    
    int **police;
    police = &chintu;
    printf("value of police = %p\n",police);
    printf("address of police = %p\n",&police);
    printf("value of *police = %p\n",*police);
    printf("value of **police = %d\n",**police);
    return 0;
}















