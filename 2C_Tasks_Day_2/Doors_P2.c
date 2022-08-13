#include <stdio.h>
int main()
{
    int n;
    int k=1;
    printf("Enter the lenth of array :");
    scanf("%d",&n);   
    int arr[n];
if (n<=100)
{
    for (int k=0; k<n;k++)
    {
     arr[k] = 0;
    //printf("arr[%d] =%d\n",k, arr[k]); 
    }

    for (int j=1; j<n+1; j++)
    {
       
    for (int i=1; i<n+1;i++)
    {
      if (i%j ==0)
      {
      arr[i] = !(arr[i]);
      }
    }
    }    
    
    for (int i=0; i<n;i++)
    {
      printf(" %d",arr[i]); 
    }    
}
else
printf("Input is Greater than 100");
printf("\n");
printf("Program Stopped! ");
}
