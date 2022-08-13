#include<stdio.h>
int mul(int a,int b)
{
    int res=0;
    while (b>0)
    {
        if (b&1) // %2
        {
            res=res+a;
        }
        a=a<<1; // a*2
        b=b>>1; // b/2
    }
    
   printf("%d",res);
}
int main()
{
   int a=2;
   int b=5;
   mul(a,b);
}