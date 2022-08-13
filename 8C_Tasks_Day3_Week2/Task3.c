/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
// int sum(int a)
// {
//     while (a>0)
//     {
//        return a=a+sum(a-1);
//     }
// }
int sum(int a)
{ int static s=0;
    if (a >0)
    {
        s=s+a;
        sum(a-1);
    }  
    return s;
}
int main()
{
    int n;
    printf("Checking sum of Decimal numbers from 1 to N \n");
    printf("============================================\n");
    printf("Enter a number N: ");
    scanf("%d",&n);
    double z=sum(n);
    printf("Sum of Decimal Numbers from 1 to %d is : %.0lf\n",n,z);
}