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
        else 
           return search_in_Array(arr,first,middle-1,(middle-1+first)/2, search);      
}
return -1;
}
int main()
{
   int c, first, last, middle, n, search, array[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   int z = search_in_Array(array,first,last,middle,search);
    if(z == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",z);
   }
   return 0;
}



