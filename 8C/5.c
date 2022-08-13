// #include<stdio.h>    

// int reverse(int n)
// {
//     int static y=0,b=0;
// while(n>0)
// {
//     b=n&1;   
//     n=n>>1;   
//     y=y<<1;
//     y=y|b;
// }
// return y;
// }
// int main()
// {
//   int x=11;
//   int z=reverse(x);
//   printf("%d ",z);
// }

#include<stdio.h>    

int reverse(int n)
{
    int static y=0,b=0;
if(n>0)
{
  y=n%2;
  printf("%d",y);
  reverse(n/2);

}
return 0;
}
int main()
{
  int x=30;
reverse(x);
}