#include<stdio.h>
int check_position_of_right_most_set_bit(int x)
{
   int m=1;
   int count=1;
   while(!(x&m)) // jub tk (x&m 1 OR !x&m 0) ni hota tb tk check krna ha
   {
    count++;
    x=x>>1;
   }
   printf("%d",count);
}
int main()
{
   int x=32;
   check_position_of_right_most_set_bit(x);
}