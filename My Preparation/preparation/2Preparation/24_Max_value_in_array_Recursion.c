#include<stdio.h>
int check_max(int arr[],int len)
{
    int static i=0,max=0; 
    if (i<len)
    {
        if (max<arr[i])
        {
           max=arr[i];
        }
        i++;
     check_max(arr,len);
     
    }
    return max;
}
int main()
{
    int arr[]={23,55,76,45,84,65,7,58};
    int len=sizeof(arr)/sizeof(arr[0]);
    int z=check_max(arr,len);
    printf("Max value : %d",z);
}