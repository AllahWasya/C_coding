// #include<stdio.h>
// int ones(int x)
// {
//     int sum=0;
//   while (x>0)
//   {
//     sum=sum+x%2;
//     x=x>>1;  //x=x/2;
//   }
//   return sum;
// }
// int main()
// {
//     int x=15;
//     int z=ones(x);
//     printf("Number of 1s are :%d",z);
// }

#include<stdio.h>
int ones(int x)
{
int static sum=0;
 if (x>0)
 {
     sum=sum+x%2;
     ones(x/2);
 }
     return sum;
}
int main()
{
    int x=15;
    int z=ones(x);
    printf("Number of 1's are :%d",z);
}