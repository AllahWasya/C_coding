#include<stdio.h>
int pow4(int x)
{
    int count=0;
    int b=0;
    while (x >1)
    {
        if (x%2 ==0)
        {
            count++;
        }
        else
        {
            b++;
        }
        x=x/2;
    }

if (b !=0)
{
    printf("Not power of 2");
}  
else
{
    printf("It is power of 2");
}
}
int main()
{
    int x=16;
    pow4(x);
}