/*
Author : Allah Wasaya
Company : AQL Tech Solutions 
1. In this code, an array is created having 11 elements of mobile no. digits.
2. Even values in array are accessed through pointer. For this, pointer address is updated in each for loop iteration.  
*/
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void main()
{
    int count_ev=0;
    int count;
    int arr[11] ={0,3,0,4,5,6,2,7,6,9,7};
    int *ptr;
    ptr=arr;
    int len=sizeof(arr)/sizeof(arr[0]);
  
    for (int i = 0; i < len; i++)
       {
             if (*ptr%2==0)
             
       		{
            	   count_ev=count_ev+1;
        	}  
        	
        count=count+1;
        ptr++;                                                                                                               
    }
    printf("No. of Digits in mobile# array: %d\n",count);
    printf("No of Even Values in mobile# array: %d\n",count_ev);
}
///////////////////////////////  END  /////////////////////////////////////////////
