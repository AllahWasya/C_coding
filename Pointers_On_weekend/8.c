#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[2][3]={{3,6,8},{1,7,9}};
    int (*p)[3]=arr;
    printf("%p\n",p);  //400
    printf("%p\n",p+1); //412
    printf("%p\n",p[0]+5); //
    printf("%p\n",p[1]+2);
}