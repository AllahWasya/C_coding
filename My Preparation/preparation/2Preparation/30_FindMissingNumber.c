#include<stdio.h>
int main()
{
    int n;
    printf("Enter length of array .");
    scanf("%d",&n);
    int arr[n-1];
    int sum=0;
    int missing;
    for (int i = 1; i <=n-1; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; 
    }
    missing=(n*(n+1)/2) -sum;
    printf("Missing Element is %d",missing);
}