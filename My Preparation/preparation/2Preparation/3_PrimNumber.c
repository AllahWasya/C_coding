#include<stdio.h>
int prime(int x)
{
    int count=0;
    for (int i = 2; i <= x/2; i++)
    {
        if ((x%i) ==0)
        {
            count++;
            break;
        }
    }
    if (count !=0)
    {
       return 1;
    }
}
int main()
{
    int x=19;
    int z=prime(x);
    if (z==1)
    {
        printf("Number is not prime\n");
    }
    else
    printf("Number is prime\n");
    
}