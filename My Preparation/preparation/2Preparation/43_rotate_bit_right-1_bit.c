#include<stdio.h>
int main()
{
    char x=16;
    x=(x<< 2)| (x<<(32-2));
    printf("%d",x);
}