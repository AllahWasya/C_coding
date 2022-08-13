/* 

1. In pointers int is 4 bytes and char is 1 bytes. 
2. Through type casting character with integer , we can only access the 1st byte of integer

*/
#include<stdio.h>
int main()
{
   int x=1027;
   int *ptr1;
   char *ptr2;
   ptr1=&x;
   printf("Value : %d  Address:  %p",*ptr1,ptr1);
   printf("\n");                                   // 00000100   00000001 
   ptr2 =(char*)ptr1;                                           
   printf("Value : %d  Address:  %p",*(ptr2+1),ptr2);
   printf("\n");
}