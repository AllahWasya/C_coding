#include<stdio.h>
int main()
{
    int n, missing,sum=0;
    printf("Enter size of array ..");
    scanf("%d",&n);
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        printf("Enter entry %d: \n",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
   int total =n*(n+1)/2;
   missing=total-sum;
   printf("Missing is %d",missing);
}