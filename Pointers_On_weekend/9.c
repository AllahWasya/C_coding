/*
Passing Multidimensional array as an argument

*/
//////////////////////////////////////////////////////////
// #include<stdio.h>
// int mularr(int *arr)
// {
//   int sum=0;
//    for (int i = 0; i < 3; i++)
//    {
//      printf("%d\n",*(arr+i));
//       sum=sum+(*(arr+i));
//    }
//    return sum;
// }
// int main()
// {
// int arr[3]={3,5,7};
// printf("%d\n",mularr(arr));

// }
//////////////////////////////////////////////////////////
#include<stdio.h>
int mularr(int (*arr)[3])
{
  int sum=0;
   for (int i = 0; i < 6; i++)
   {
     printf("%d\n",*(arr[0]+i));
      sum=sum+(*(arr[0]+i));
   }
   return sum;
}
int main()
{
int arr[2][3]={{3,5,7},{4,6,2}};
printf("%d\n",mularr(arr));

}
