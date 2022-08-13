#include<stdio.h>
int equal(int a,int b)
{
    if (a^b)
    {
        printf("Not Equal");
    }
    else
    printf("Equal");
}
int main()
{
    int a=7;
    int b=8;
    equal(a,b);
}