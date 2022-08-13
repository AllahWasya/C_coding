#include<stdio.h>
int reverse(int x)
{
    int sum=0,rem;
    while (x)
    {
    rem=x%10;
    sum=sum*10+rem;
    x=x/10;
 }
return sum;
}
int main()
{
    int x=123;
    int z=reverse(x);
    printf("%d",z);
}
