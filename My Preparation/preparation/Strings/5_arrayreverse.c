#include<stdio.h>
int reverse(int arr[], int x)
{ 
    x=x-1;
    while (x>=0)
    {
      printf("%d",arr[x]);
      x--;
    }
}
int main()
{
    int arr[5]={3,5,6,7,8};
    reverse(arr,5);
}