
#include <stdio.h>
#include <stdlib.h>
void allocate(int size, int *ptr)
{
    for (int i=0; i<size;i++)
{
    printf("%d ", *(ptr+i));
}
}
// int x;  
int main() 
{
    int *y;  
    int size=5; //4294967295
    y = (int*) malloc(size*sizeof(int)); 
    //printf("%p",y);
for (int i=0; i<size;i++)
{
    printf("Enter the values of Array: %d ",i);
    scanf("%d", &y[i]);
    //printf("\n");
}
printf("\nThe values in the array are: ");
// for (int i=0; i<size;i++)
// {
//     printf("%d  ", y[i]);
// }
allocate(size,y);
    printf("\n");
    //*y=4; 
    // printf("heap memory: %d\n", *y); 
    // free(y);
    // printf("heap memory: %d\n", *y); 
    
}


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {

// int *ptr1;
// int x=9;
// ptr1 = &x;
//     // We want ptr1 to store the space of 3 integers
// ptr1 = (int*) malloc (sizeof(int));
// printf("%d\n",*ptr1);
// }