#include <stdio.h>
void my_print(int *A, int *B)
{

for (int i = 0; i < 13; i++)
{
 
        *(B+i)=*(A+i);
    
}

}


int main() {
  
  // 2d array
  int num[3][4] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };
int num2[3][4];
int *ptr2=&num2[0][0];
  // pointer ptr pointing at array num
  int *ptr = &num[0][0];
  my_print(ptr,ptr2);

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
    {
        printf("%d ",num2[i][j]);
    }
    
   }
    
  return 0;
}