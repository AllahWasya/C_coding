#include<stdio.h>
int check(int x)
{
    int y;
    int count=0;
    while (x !=0)
    {
       y= x%10;
       if (y !=0 && y !=1)
       {
          count++;
       }
        x=x/10;
    }
    if (count !=0)
    {
        printf("Number is not binary");
    }
    else
    printf("Number is binary");
}
int main()
{
    int x=1510;
    check(x);
}