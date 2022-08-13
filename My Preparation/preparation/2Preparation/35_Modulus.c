#include<stdio.h>
int modulus(int x, int y)
{
     return(x&(y-1));
}
int main()
{
    int x=26;
    int y=3;
    printf("%d",modulus(x,y));

}