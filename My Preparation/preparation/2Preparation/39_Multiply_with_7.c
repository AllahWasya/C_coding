#include<stdio.h>
int mul7(int n)
{
    return ((n<<3)-n);
}
int main()
{
    int x=8;
    printf("%d",mul7(x));
}