#include<stdio.h>
int mul(int x)
{
    return (x<<1)+x+(x>>1);
}
int main()
{
    int x=5;
    int z=mul(x);
    printf("Result is: %f",z);
}