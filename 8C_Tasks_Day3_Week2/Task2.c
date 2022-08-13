/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
int GCD(int a, int b)
{
   if(b>a)
      return GCD(b,a);
   if(b==0)
      return a;
   else
      return GCD(b,a%b);
}
int main()
{
    int a,b;
    printf("Checking Greatest Common Divisor of two Numbers\n");
    printf("===============================================\n");
    printf("Enter the 1st Number : ");
    scanf("%d",&a);
    printf("Enter the 2nd Number : ");
    scanf("%d",&b);
    int z=GCD(a,b);
    printf("GCD of %d and %d is %d\n",a,b,z);
    return 0;
}
