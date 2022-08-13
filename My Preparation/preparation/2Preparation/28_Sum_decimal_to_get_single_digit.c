#include<stdio.h>
int sumall(int n)
{
   int static sum=0,y=0;
   if(n/10 != 0)
   {
     y=n%10;
     n=n/10;
     n=n+y;
     sumall(n);
   }
   else
   return n;
}
int main()
{
    int x=123;
    int z=sumall(x);
    printf("Sum : %d",z);
}