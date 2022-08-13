#include<stdio.h>
int main()
{
    int x=3,y=7;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("Swaped digits: x: %d, y: %d",x,y);
}