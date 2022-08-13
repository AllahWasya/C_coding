// C++ code to add
// one to a given number
#include <stdio.h>
 
int addOne(int x)
{
    int m=1;
    while (x&m)
    {
        x=x^m;
        m=m<<1;
    }

    x=x^m;
    return x;
    
}
int main()
{
    printf("%d", addOne(18));
    getchar();
    return 0;
}