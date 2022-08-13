/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include <stdio.h>
int SearchMissingEntry(int arr[],int first, int last, int middle)
{
   while (first <last)
   {
    
    if (arr[middle] != middle && arr[middle-1] == middle-1)
    {
        return middle;
    }
    else if (arr[middle] != middle)
    {
        return SearchMissingEntry(arr,first,middle,(middle+first)/2);
    }
    else
        return SearchMissingEntry(arr,middle,last,(middle+last)/2);
   }
   return -1;
}
int main()
{
int arr[100];
int j=0;
int x=0;

printf("Finding the missing element in array of 100 integers (0-99) integers!\n");
printf("=====================================================================\n");


printf("Enter any number you want to miss from 0-99 numbers :");
scanf("%d",&x);

for(int i = 0; i < 100; i++) 
{    
		if (i==x)                       // Missing Entery
	    {
	       j++;
	    }
	     arr[i]=j;
	     j++;
}

for(int i = 0; i < 100; i++) 
{
    	printf("%d ",arr[i]);
}
//////////////////////////// Checking missing Entery //////////////////////////////
printf("\n                                               ");
printf("\nChecking Missing Entery with Binary Search...\n");
///////////////////////////////////////////////////////////////////////////////////
int first=0;
int last=98;
int middle= (first+last)/2;
int z=SearchMissingEntry(arr,first,last,middle);  // Function Call
printf("\n");
    if(z == -1 ) {
      printf("Element Missing is not found using Binary Search");
   }
   else {
      printf("Element Missing Entry is found at index : %d\n",z);
   }
   printf("\n");
   return 0;
}