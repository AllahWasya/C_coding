/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
int search_in_Array(int arr[], int first, int last, int middle, int search)
{
      if (first<last)
      {
        if (arr[middle]== search)
        {
            return middle;
        }
        else if (arr[middle] < search)
        {
            return search_in_Array(arr,middle+1,last,(middle+1+last)/2, search);
        }
        else if (arr[middle] > search)
        {
           return search_in_Array(arr,first,middle-1,(middle-1+first)/2, search); 
        }     
        else
        return -1;
      } 
}
int main()
{
   int c, first, last, middle, n, search, array[100];
   printf("\n");
    printf("       Binary Search Using Recursion!          \n");
    printf("===============================================\n");

   printf("Enter lenth of the Array: ");
   scanf("%d",&n); 
   for (c = 0; c < n; c++)
   {
      printf("Enter %d element of Array: ", c+1);
      scanf("%d",&array[c]); 
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = i+1; j < n; j++)
      {
         if (array[i]>array[j])
         {
            int temp;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }  
      }  
   }
   printf("\nSorted Array is: ");
   for (int i = 0; i < n; i++)
   {
      printf("%d ",array[i]);
   }
   
   printf("\nEnter the value to find: ");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   int z = search_in_Array(array,first,last,middle,search);
   printf("\n");
    if(z == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d\n",z);
   }
   return 0;
}



