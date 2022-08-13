#include<stdio.h>
int main()
{
    int x=7483646; 
    int d=2; // rotate how many bits
    int y=(x<<d) | (x>>(32-d)); 
    printf(" %d\n",y);
}