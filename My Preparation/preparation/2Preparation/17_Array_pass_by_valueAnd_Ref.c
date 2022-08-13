
#include<stdio.h>
#define N 5
struct Array
{
   size_t size;
   int arr[N];
};

void pass(struct Array array)
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
int main()
{
  struct Array array ={N, {1,2,3,4,5}};
  for (int i = 0; i < array.size; i++)
  {
    printf("%d ",array.arr[i]);
  }
   printf("\n");
  pass(array);
}


///////////////////////////////////////////////////////////////////////////////


