/*

In this code, Using single array add 1 to its index values using function. Make a copy of array in that function  

*/

#include<stdio.h>

int compare(int A[10],int B[10])
{
   int x=0;
   int y=0;
   for (int i = 0; i < 10; i++)
   {
      if (A[i]==B[i]+1)
      {
          x=x+1;
      }
      else
          y=y+1;
      
   }
   if (y !=0)
   {
      return 1;
   }
   else

      return 0;
}
int add1(int arr1[10])
{
  int copy[10];
    for (int i = 0; i < 10; i++)
    {
        arr1[i]=arr1[i]+1;
        copy[i]=arr1[i];
    }
    int z= compare(copy,arr1);
    return z;
}
void fun_add2(int arr1[10])
{
      for (int i = 0; i < 10; i++)
    {
        arr1[i]=arr1[i]+2;
    }   
}

int main()
{
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};

    int r= add1(arr1);

    if (r==1)
    {
        fun_add2(arr1);
    }
    else
    {
        printf("Values are not Incremented by 1");
    }

  for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr1[i]);
    }
}







