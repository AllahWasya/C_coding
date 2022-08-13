#include<stdio.h>
int main()
{
    int x=4;
    int m=1;
    int y;
    int count;

 while (x)
 {
   if (!(x&m))
   {
      count++;
      x=x>>1;
      m=m<<1;
   }
 x=x/2;
 }
   printf("%d",count); 
}