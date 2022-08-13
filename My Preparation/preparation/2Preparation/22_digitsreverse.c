#include<stdio.h>
int reverse(int n)
{
    int sum=0,rem;
   while (n)
   {
    rem=n%10;
    sum =sum*10+rem;
    n=n/10;
   }
   return sum;
}
int main()
{
   int x=123;
   int z=reverse(x);
   printf("Number after reversing is : %d", z);
}



// #include<stdio.h>
// int swap(int n)
// {
//     int static sum=0; int static rem;

//     if (n)
//     {
//         rem=n%10;
//         sum =sum*10 + rem;
//         swap(n/10);
//     }
//     else
// return sum; 
// }
// int main()
// {
//     int n=823;
//     int z=swap(n);
//     printf("Reverse number is : %d",z);
// }