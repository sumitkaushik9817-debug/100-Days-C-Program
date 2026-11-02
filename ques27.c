#include<stdio.h>

   void main() {
   int i;
   int *ptr;
   int **pptr;
   int ***ppptr;
    i = 25;
	ptr = &i;
   pptr = &ptr;
   ppptr = &pptr;
   printf("%d\n", i);
   printf("%d\n", *ptr);
   printf("%p\n", ptr);
   printf("%d", *ptr);
   printf("%d", *ptr);
   printf("%d", **pptr);
   printf("%d", *ppptr);
   printf("%d", ppptr);
   printf("%d", ***ppptr);
   
   
   
  
}
   