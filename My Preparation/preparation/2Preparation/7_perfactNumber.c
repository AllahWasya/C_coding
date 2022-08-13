#include<stdio.h>
int perfact(int x)
{
    int sum=0;
    int y=x;
   for (int i = 1; i <= x/2; i++)
   {
         if (x%i == 0)
         {
            sum=sum+i;
         }
   } 
if (y==sum)
{
    printf("number is perfact\n");
}
else
printf("Not");
   
}
int main()
{
    int x=6;
    perfact(x);
}