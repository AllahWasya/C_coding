#include<stdio.h>
int powv(int x, int y)
{
    int result=1;
    while (y !=0)
    {
        result = result*x;
        y--;
    }
    printf("Result is: %d",result);
}
int main()
{
    int x=6;
    int y=2;
    powv(x,y);
}