#include<stdio.h>
int binary(int x)
{
 int y;
 int m=1;
if (x)
{
    y=x&m;
    x=x>>1;
    binary(x);
    printf("%d",y);
    
}
else
{
     return 0;
}
}

int main()
{
    int x=10;
    binary(x);
}
