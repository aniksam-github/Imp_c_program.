// program to demonstrate realloc() using functions

#include <stdio.h>
int main () {
   char *ptr;
   ptr = (char *) malloc(10);
   strcpy(ptr, "Programming");
   printf(" %s,  Address = %u\n", ptr, ptr);

   ptr = (char *) realloc(ptr, 20); //ptr is reallocated with new size
   strcat(ptr, " In 'C'");
   printf(" %s,  Address = %u\n", ptr, ptr);
   free(ptr);
   return 0;
}
