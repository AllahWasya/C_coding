#include<stdio.h>
 
struct Point
{
   int x, y, z;
};
 
int main()
{
   struct Point p1 = {0, 1, 1};
   // Accessing members of point p1
   p1.x = 20;
   printf ("x = %d, y = %d", p1.x, p1.y);
   return 0;
}