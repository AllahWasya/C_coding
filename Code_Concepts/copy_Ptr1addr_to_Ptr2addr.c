#include<stdio.h>
void g(int **ppx, int *py) {
*ppx = py;
}
int main() {
int x = 1, y = 2, *px;
px = &x;
g(&px, &y);
printf("%d", *px); // will print 2
}