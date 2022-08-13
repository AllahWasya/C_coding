/*

Pass an array by value to a function in C/C++
*/

#include <stdio.h>
#define N 5

struct Array {
    size_t size;
    int arr[N];
};
void increment(struct Array array)
{
 for (int i = 0; i < array.size; i++)
 {
    array.arr[i]++;
 }
  for (int i = 0; i < array.size; i++)
 {
    printf("%d ",array.arr[i]);
 }
}
int main(void)
{
 
 struct Array array ={N,{1,2,3,4,5}};  // Setting values for Structure Parameters. size =5, and arr[]
 
 increment(array);

 printf("\n");

 for (int i = 0; i < array.size; i++)
 {
    printf("%d ",array.arr[i]);
 }

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////



// #include<stdio.h>
 
// struct Point
// {
//    int x, y;
// };
 
// int main()
// {
//    //struct Point p1 = {1, 2};
//    struct Point p1;
//    p1.x=6;
//    p1.y=7;
 
//    // p2 is a pointer to structure p1
//    struct Point *p2 = &p1;
 
//    // Accessing structure members using structure pointer
//    printf("%d", p2->x);
//    return 0;
// }