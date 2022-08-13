/*
Athor : Allah Wasaya
Company : AQL TECH SOLUTIONS
1. This Code Misses a value in array and dipalys array indicating missing value.
2. Then it Prints missing entery by linear search.
*/

#include <stdio.h>
int main()
{
int arr[99];
int j=0;
for(int i = 0; i < 99; i++) 
{    
		if (i==7)
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
printf("\nChecking Missing Entery with linear search...\n");
///////////////////////////////////////////////////////////////////////////////////
for (int i = 0; i < 99; i++)
{
		if (arr[i] != i)
		{
			printf("'%dth' Entery is missing\n",i+1);
			break;
		}	
}
}
//////////////////////////////////  END  ////////////////////////////////////////////
