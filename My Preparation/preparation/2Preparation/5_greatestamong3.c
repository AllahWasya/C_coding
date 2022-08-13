#include<stdio.h>
int greatest(int a,int b, int c)
{
   if (a>=b && b>= c)
   {
     printf(" a is greatest\n");
   }
    if (b>=a && b>= c)
   {
     printf(" b is greatest\n");
   }
    if (c>=b && c>= a)
   {
     printf(" c is greatest\n");
   }
}
int main()
{
    int a,b,c;
    a=4;
    b=18;
    c=9;
    greatest(a,b,c);
}