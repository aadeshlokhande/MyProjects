// *****reading mode******
#include <stdio.h>
int main() 
{
   FILE *pop;
   char string[100];
   
   pop = fopen("dell.txt", "r");
   fscanf(pop, "%s",string);
   printf("file content is = %s\n",string);

   fclose(pop);
   return 0;
}




// *****Writing mode******
// #include <stdio.h>
// int main() 
// {
//    FILE *fileptr;

//    fileptr = fopen("test.txt", "w");
//    fprintf(fileptr, "Hello my name is Aadesh Lokhande\n");

//    fclose(fileptr);
//    return 0;
// }





// *****append mode******
// #include <stdio.h>
// int main() 
// {
//    FILE *fileptr;

//    fileptr = fopen("test.txt", "a");
//    fprintf(fileptr, " and you can call me Aadi\n");

//    fclose(fileptr);
//    return 0;
// }