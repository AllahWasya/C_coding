#include<stdio.h>
int print1(int);
int main()
{
    int n=10;
    print1(n);
   
}
int print1(int n)
{ 
  static int x;
  if (n>0)
  {
    print1(n-1);
    printf("%d ",n);
  } 
  else
  return 0;
}