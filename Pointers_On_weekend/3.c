/*
pointer as function Argument 
*/

#include <stdio.h>
void increment (int *y)
{
    *y=*y+1;
    printf("Address of a in fun is %p\n",y);
}

int main()
{
    int a;
    a=5;
    increment(&a);   // pass the address instead of value , so that we can have reference of the value to perform operation on that perticular value.
    // If we use pointer as function then this is called call by reference. Call by reference save a lot memory. Just use reference to it. New copy of
    // data types is reduced.
    printf("Value of a is %d\n",a);
    printf("Address of a in main is %p\n",&a);

}
