#include <stdio.h>
int main()
{
    int n;
    int len;
    int temp=0;
    printf("Enter the lenth of array :");
    scanf("%d",&len);   
    int arr[len];
// Program will take input only when it is even and less than 100
if (len<=100 && len%2==0)
{
// First half zeros    
for (int k=0; k<len/2;k++)
    {
     arr[k]=0;
   // printf("arr[%d] =%d\n",k, arr[k]); 
    }  
// Second Half 1's    
for (int k=len/2; k<len;k++)
    {
     arr[k] =1;
    // printf("arr[%d] =%d\n",k, arr[k]); 
    }
// Printing Input from the user
printf("Input from User\n");     
for (int i=0; i<len;i++)
    {
      printf(" %d",arr[i]); 
    } 
 printf("\n"); 
printf("OutPut Generated \n"); 
//////////////////////////////////////////////////////////////// 
 for (int i=len/2; i>1; i--)
{

    for (int j =1; i>j; j++)
    {
      temp=arr[len/2-j+len/2-i];
      arr[len/2-j+len/2-i] = arr[len/2-j+1+len/2-i];
      arr[len/2-j+1+len/2-i]=temp;
    }
}
//////////////////////////////////////////////////////////////////
for (int i=0; i<len;i++)
{
      printf(" %d",arr[i]); 
}
printf("\n");
}
else
printf("Input is ODD or Greater than 100");
printf("\n");
printf("Program Stopped! \n");
}


