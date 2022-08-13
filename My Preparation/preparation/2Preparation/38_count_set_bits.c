#include<stdio.h>
int main()
{
    int x=15;
    int count =0;
    for (int i = 0; i < 32; i++)
    {
        if (x&1)
        {
            count++;
        }
        x=x>>1;
    }
printf("%d",count);    

}