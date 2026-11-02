#include<stdio.h>

  int main() {
  int arr[4] = {10,20,30,40};
  int *ptr = arr;
  printf("%p", arr);
  printf("%p", ptr);
  printf("%d", *(arr+1));
  printf("%d", arr[1]);
  printf("%d", *ptr);
  printf("%d", *(ptr+1));
  printf("%d", sizeof(ptr));
 
   return 0;
}  