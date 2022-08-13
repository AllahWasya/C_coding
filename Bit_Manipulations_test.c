#include<stdio.h>
int main()
{
   int m=1;
    for (int i = 0; i < 20; i++)
    {
        printf("\n%d",m^i);
       
         printf(" %d",i&1);

          printf(" %d",i|1);
    }
    
}