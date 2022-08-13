#include<stdio.h>
int sumall(int x)
{
int static sum=0;
   while (x !=0)
   {
      sum=sum+x%10;
      x=x/10;
   }
   return sum;
   
}
int main()
{
    int x=1237;
    int z=sumall(x);
    printf("Sum is %d",z);
}