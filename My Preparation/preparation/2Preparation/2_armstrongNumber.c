#include<stdio.h>
int armstrong(int x)
{
    int y=0;
    int sum=0;
    int orig=x;
    while (x !=0)
    {
        y=x%10;
        sum =sum + y*y*y;
        x=x/10;
    }
if (sum==orig)
{
   printf("Number is Armstrong");
}
else
printf("Number is not armstrong");
}

int main()
{
    int x=370;
    int z=armstrong(x);
}