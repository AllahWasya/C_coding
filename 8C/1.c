#include<stdio.h>
int main()
{
for (int i = 0; i < 2; i++)
{
    static int a=5;
    a=a+5;
    printf("%d ",a);
}

}