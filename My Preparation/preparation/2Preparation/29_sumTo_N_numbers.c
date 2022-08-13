#include<stdio.h>
int sumn(int x)
{
    int static sum;
//    while (x>0)
//    {
//     return x=x+sumn(x-1);
//    }
   if (x)
   {
     sum=sum+x;
     sumn(x-1);
   }
   else
        return sum;
  
}
int main()
{
    int x=8;
    int z=sumn(x);
    printf("Sum : %d",z);
}