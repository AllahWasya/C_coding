/*

Traversing the List  (Linked List vs. Arrays)

*/

#include<stdio.h>
int main()
{
    int arr[]={45,87,26,48};
    int size =sizeof(arr)/sizeof(arr[0]); // counting takes one time unit but in case of linklist it takes n time units.
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
