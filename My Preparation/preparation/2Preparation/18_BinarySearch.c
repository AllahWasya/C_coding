#include<stdio.h>
int find(int arr[],int start, int end,int middle,int seearch)
{
    if (start<end)
    {
        if (arr[middle]==seearch)
        {
           return middle;
        }
        else if (arr[middle]<seearch)
        {
           return find(arr,middle+1,end,(middle+1+end)/2,seearch);
        }
        else if (arr[middle]>seearch)
        {
           return find(arr,start,middle-1,(middle-1+start)/2,seearch);
        }
        else
        {
        return -1;
        }
    }

}
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int start=0;
    int seearch=6;
    int end=7;
    int middle=(start+end)/2;
    int z=find(arr,start,end,middle,seearch);
    if (z==-1)
    {
        printf("Value not found");
    }
    else
    {
        printf("Value is found at index %d",z);
    }
    
}