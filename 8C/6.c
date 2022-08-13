#include<stdio.h>
int reverse(int x)
{
  int  static sum=0,rem;
   while (x>0)
   {
     rem=x%10;
     sum=sum*10+rem;
     x=x/10;
   }
   return sum;
}
int main()
{
    int x;
    printf("Enter no. ");
    scanf("%d",&x);
    int t=reverse(x);
    printf("%d",t);
}
