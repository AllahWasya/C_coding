/*
Author : Allah Wasaya
Company : AQL Tech Solutions
1. Here objective is to find the number of vowels in my name using pointer for array.
2. An array of all possible vowel characters is created to compare.
3. Character pointer stores address of 1st character in array. And through this, all characters are accessed and compared with 
   vowel characters.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    char C1[12] ={'A','l','l','a','h',' ','W','a','s','a','y','a'}; // Character array of my name
    char C3[10] ={'A','a','e','E','i','o','u','I','O','U'}; // All posible vowel characters 
    char* C2;    
    int count=0;
    C2=C1;
    for (int i = 0; i < 12; i++)
    {        
        if (*(C2+i)=='A' || *(C2+i)=='a' || *(C2+i)=='E' || *(C2+i)=='e' || *(C2+i)=='I' || *(C2+i)=='i' 
                         || *(C2+i)=='O' || *(C2+i)=='o' || *(C2+i)=='U' || *(C2+i)=='U')
        {
            count=count+1;
        }
    }
printf("No. of vowel characters in my name: %d\n",count);
}
///////////////////////////////////  END ///////////////////////////////////////////////////////////////
