/*
1. Take size of the array as an input from the user.
2. Allocate memory with that size of the array
3. Fill and display the array

*/

// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array : ");
//     scanf("%d",&n);
//     int *p=(int*)malloc(n*sizeof(int)); // Memory allocation with the size of array
//    // int *p=(int*)calloc(n,sizeof(int)); // Memory allocation with the size of array
//     for (int i = 0; i < n; i++)
//     {
//         p[i]=i+1;
//     }
//     free(p);
//     p[2]=8;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",p[i]);
//     }
    
// }
////////////////////////////////////////////////// Extend the previous Memory Block /////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int)); // Memory allocation with the size of array
   // int *p=(int*)calloc(n,sizeof(int)); // Memory allocation with the size of array
    int *q=(int*)realloc(p,(3*n)*sizeof(int)); // Memory extended 3 times 
  //  free(q);
   // int *q=(int*)realloc(p,n/2*sizeof(int)); // Memory reduced
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }
   //free(q);
   // p[2]=8;
    for (int i = 0; i < 3*n; i++)
    {
        printf("%d ",p[i]);
    }
    
}