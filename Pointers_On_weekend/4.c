#include <stdio.h>
int main()
{
    int arr[4] = { 3,7,4,1};
    //int *p=arr;
    printf("%d\n",*(arr+3));
    // arr++ is invalid;
    int *p;
    p=arr;
    p++ ;// valid 
    printf("%d\n",*p);
}