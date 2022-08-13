/*

Functions Resturn pointers 


*/

// #include<stdio.h>
// int add (int *x ,int *y) // called function
// {
//     int c= (*x)+(*y);
//     return c;
// }
// int main()            // calling function
// {
// int a=6;
// int b=8;
// //printf("Result :%d\n",add(a,b)); // call by value
// printf("Result :%d\n",add(&a,&b)); // call by value

// }
//////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>

// int add (int *a ,int *b, int *c) // called function
// {
//     *c= (*a)+(*b);
// }
// int main()            // calling function
// {
// int a=6,b=8;
// int c=0;;
// add(&a,&b,&c);
// //printf("Result :%d\n",add(a,b)); // call by value
// printf("Result :%d\n",c); // call by value
// }
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int *add (int *a ,int *b) // called function
{
    int c;
    c=(*a)+(*b);
    return &c;
}
int main()            // calling function
{
int a=6,b=8;
int c=0;
int *z=add(&a,&b);
//printf("Result :%d\n",add(a,b)); // call by value
printf("Result :%d\n",*z); // call by value
}