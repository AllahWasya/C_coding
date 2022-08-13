/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
int sum(int a, int y)
{
if (a /10 ==0 )
{
     return a;
}
else
{
    y=a%10;
    a=a/10;
    a=a+y;
  return a=sum(a,y);
}
}  
int main()
{
    int n,y=0;
    printf("\n");
    printf("Caculating sum of all digits of entered number utill it becomes sigle digit number using Recursive Algorithm\n");
    printf("============================================================================================================\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    int z=sum(n,y);
    printf("Sum of Decimal digits: %d\n",z);
}