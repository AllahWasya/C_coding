////////////////////////////    Pass value by Value   ////////////////////////
/*
In this code i is examined that how we can pass two arrays to a function and copy data 
1. This can be done without using pointers.
*/

#include <stdio.h>
void mystrcpy(int A[2][2], int B[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            B[i][j]=A[i][j];
        }
        
    }
    
}
int main()
{
    int arr1[2][2]={{3,5},{34,56}};
    int arr2[2][2];

     mystrcpy(arr1,arr2);

    for (int i = 0; i < 2; i++)
    { 
        for (int j = 0; j < 2; j++)
        {
          printf("%d ",arr2[i][j]);
        }
    }
    printf("\n");
}

