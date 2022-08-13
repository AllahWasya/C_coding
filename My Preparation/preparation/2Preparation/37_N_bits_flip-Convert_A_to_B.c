// #include<stdio.h>
// int flip(int n)
// {
//     int count=0;
//     for (int i =0;i<32;i++)
//     {
//         if(n&1)  // if n=1 then result will be 1 and if n is zero then result will be 0;
//             count++;
//         n = n>>1;
//     }
//     return count;   
// }
// int main()
// {
//   int a=10;
//   int b=20;
//   int c=a^b;
//   printf("%d ",flip(c));
// }

/*
if a=01010
b=10100
then we need to flip 4 bits
For this , we firstly find the xor to determine different bits
The, we calculated 
*/



#include<stdio.h>
int flip(int n)
{
    int count=0;
    int rem=0;
 while (n)
 {
   rem=n&1;
   count=count+rem;
   n=n>>1;
 }
 
    return count;   
}
int main()
{
  int a=10;
  int b=15;
  int c=a^b;
  printf("%d ",flip(c));
}