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
        return SearchMissingEntry(arr,first,middle,(middle+first)/2);;
    }
    else
        return SearchMissingEntry(arr,middle,last,(middle+last)/2);
   }
   return -1;
}
int main()
{
int arr[99];
int j=0;
for(int i = 0; i < 99; i++) 
{    
		if (i==24)                       // Missing Entery
	    {
	       j++;
	    }
	     arr[i]=j;
	     j++;
}

for(int i = 0; i < 99; i++) 
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
int z=SearchMissingEntry(arr,first,last,middle);
    if(z == -1 ) {
      printf("Element is not found using Binary Search");
   }
   else {
      printf("Element Entry found at index : %d\n",z);
   }
   return 0;

}