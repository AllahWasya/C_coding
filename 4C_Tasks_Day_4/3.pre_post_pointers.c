#include<stdio.h>
int main()
{
   
// int *iptr, a; //which is pointer to int? which is int?
// double *fptr, b;
// int x;
// a = 10;
// b = 20;
// iptr = &a;
// fptr = &b;
// for ( x = 0; x < 10; x=x+2)
// {
// printf("Values %d\n",*iptr+x);
// //return 0;
// }

    int arr[4]={8,6,9,2};
    int *ptr;
    ptr=arr;
    // printf("%d\n",ptr[0]);
    printf("%p\n",&arr[0]);  // address of first element
    printf("%p\n",arr+1);    // address of 2nd Element 
    printf("%p\n",ptr);      // address of 1st element 
    printf("%d\n",*ptr++);   // First see the value at then do increment in address
    printf("%p\n",ptr);      // incremented address
    printf("%d\n",*++ptr);  // First increment and then see the value at ..... 
}