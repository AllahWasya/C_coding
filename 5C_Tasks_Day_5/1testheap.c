#include <stdio.h>
#include <stdlib.h>
void allocate(int size, int **ptr)
{
    *ptr = (int*) malloc(size*sizeof(int));  
}
int main() 
{
    int *y;  
    int size=4294967295;   //4294967295 x 4 bytes = 17179869183 = 2^34 -1 = 4GB  
/*
 If I change size of array to 4294967296, then code does not complile. So according maximum heap memory could be 4GB. 
*/
printf("\nThe values in the array are: ");
allocate(size,&y);
for (int i=0; i<size;i++)
{
    *(y+i)=i;
}
 for (int i=0; i<size;i++)
{
    printf("%d  ", *(y+i));
}
printf("\n");
return 0;
}