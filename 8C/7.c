// #include<stdio.h>
// int main()
// {
//     int x=7,y=9;
//     x=x^y;
//     y=x^y;
//     x=x^y;
//     printf("x: %d, y: %d",x,y);
// }

#include<stdio.h>
int add(int x,int y)
{
   int psum=x^y;
   int carry=(x&y)<<1;  
   if (carry ==0)
   {
      return psum;
   }
   else
        add(psum,carry);
}
int main()
{
    int x=7,y=9;
    int z=add(x,y);
    printf("Sum is: %d",z);
}