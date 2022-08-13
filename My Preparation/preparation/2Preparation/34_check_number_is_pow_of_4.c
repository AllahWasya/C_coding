#include<stdio.h>
int pow4(int x)
{
    int count=0;
    int b=0;
    while (x >1)
    {
        if (x%4 ==0)
        {
            count++;
        }
        else
        {
            b++;
        }
        x=x/4;
    }

if (b !=0)
{
    printf("Not power of 4");
}  
else
{
    printf("power of 4");
}
}
int main()
{
    int x=56;
    pow4(x);
}