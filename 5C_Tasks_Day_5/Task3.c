/*
Author : Allah Wasaya
Company : AQL Tech Solutions

1. This is code to check, either the input word or phrase is palendrome or not using pointers.
2. For this, 1st and last characters are compared for ((length of string/2)-1) times. For Example, 
   For string "wow" legth of string is 4 because of null character at the end. 4/2 =2, 2-1=1 times loop compare character and 
   and count++ , if every time characters are equal. then count will be equal to len/2 -1. Pointers address are updated in loop
   to access characters at that address.   
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{   
    char A[50];
    char *ptr =A;
    int result=0;
    int count=0;
    printf("Enter any string:");
    fgets(A, sizeof(A), stdin);  // read string
    int  len= strlen(A);
    //printf("%s\n %d",A, len);
    // printf("%c\n",*A);
    // printf("%c\n",*(A+len-2));
    
for (int i = 0; i < (len/2)-1; i++)
    {
        
        if (*(A+i) == *(A+len-2-i))  // comapre 
           
            {
                 count=count+1;
            }
    }
   
    if (count == (len/2)-1)
        printf("Given string is palindrome\n");

    else
        printf("Given string is not palindrome\n");
 
 }
//////////////////////////////////////////////////////  END  //////////////////////////////////////////////////////////////////////////////
