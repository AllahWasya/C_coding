/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
#include<stdlib.h>

int maximum(int arr[], int len)
{
    static int i=0;
    static int max;
    if(len>i)
    {
        if(max<arr[i])
            max=arr[i];
      i++;
    maximum(arr,len);
    }
    return max;   
}
    
int main()
{
    printf("Checking Maximum Value in Array using Recursive Algorithm\n");
    printf("=========================================================\n");
    int arr[]={36,67,21,89,45,271,73,44,91,23,500,221,601,300,77}; // Dynamic Array 
    int len=sizeof(arr)/sizeof(arr[0]);
    int m = maximum(arr,len); 
    printf("Maximum Value in this Array is: %d\n",m);
    
}