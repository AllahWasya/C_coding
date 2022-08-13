// #include<stdio.h>
// int* max(int *x, int *y) {
// if (*x > *y)
// return x;
// return y;
// }
// int main() {
// int a = 1, b = 2, *p;
// p = max(&a, &b);
// printf("%d",*p);
// //return 0;
// }

/////////////////////////////////////
#include<stdio.h>
int* max(int x, int y) {
if (x > y)
return &x;
return &y;
}
int main()
{
int a=6,b=7;
int *p = max(a, b);
}
