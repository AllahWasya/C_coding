#include <stdio.h>
int main()
{
int A[2][4] = {
    {10, 11, 12, 13},                 
    {14, 15, 16, 17}
}; 
//printf("%p\n",A); 
int (*ptr)[4];
ptr=A; 
printf("Address of 1st element in array is : %p , %p",ptr, A);
printf("\n");
printf("Next address is: %p",ptr[0]+1); // This will be address of next row's 1st element
printf("\n");
// Addresses 
// printf("%p \n %p\n %p\n %p\n %p\n %p\n %p\n",A, &A[0][0],A[0],&A[0][1], A[0]+1, A[0]+4, A[1]);
// printf("\n");
// // Values
// printf("%p \n %d\n %d\n %d\n %d\n %d\n %d\n",*(A), *(&A[0][0]),*(A[0]),*(&A[0][1]), *(A[0]+1), *(A[0]+4), *(A[1])); 
// // 
// printf(" %d",ptr[0][0]);

// printf("\nThis \n %p",*(ptr+3));
// printf("\n");
// int B[4]={6,7,2,5};
// int *ptr1;
// ptr1=B;
// printf(" %d\n",ptr1[0]);
}