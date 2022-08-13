#include<stdio.h>
int GCD(int x,int y)
{
   for (int i = 1; i<= x && i<=y ; i++)
   {
      if (x%i == 0 && y%i==0)
      { 
          printf("GCD is %d",i);
      }
   }
}
int main()
{
   int x=14;
   int y=7;
   GCD(x,y);
}