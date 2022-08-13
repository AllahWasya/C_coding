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
}
