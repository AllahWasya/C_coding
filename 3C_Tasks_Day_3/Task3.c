/*
Athor : Allah Wasaya
Company : AQL TECH SOLUTIONS

1. This Code Takes 25 integer from user in range 0-9 values placed in 5x5 2-D Matrix.
2. It Prints frequency of each elements from 0-9.
3. It prints Maximum Frequecy.
4. Its prints Mode.

*/
#include<stdio.h>
int main()
{ 
  int const LENGTH=5;
  int const WIDTH=5;   
  int values[LENGTH][WIDTH];
  int frquency_arr[10];
  int count=0;
  int max_freq=0;
  int mode;
  printf("                                          \n");
  printf("==========================================\n");
  printf("Enter 25 integers between 1-9.............\n");
  printf("                                          \n");

//////////////////// Taking input and storing it in an array /////////////////////
for(int i=0; i < LENGTH; i++) 
  {  
    for (int j = 0; j < WIDTH; j++)
    {
         printf("Enter value for array[%d][%d] : ",i,j);
         scanf("%d", &values[i][j]);
    }
  }
////////////////// Printing all values placed in Array ////////////////////////////
printf("Values inside arrays .. \n");
for (int i = 0; i < LENGTH; i++)
{
    for (int j = 0; j < WIDTH; j++)
    {
        printf(" %d",values[i][j]);
    }
    printf("\n");
}
/////////////////////////////  Checking Mode //////////////////////////////////////
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < LENGTH; j++)
    {
        for (int k = 0; k < WIDTH; k++)
        {
            if (i==values[j][k])
              {
                   count=count+1;
              }
        }
    }
    frquency_arr[i] = count;
    count=0;
}
////////////////////////// Printing Frquency of the Array ///////////////////////////
printf("Printing Frequency of Array .. \n");
for (int i = 0; i < 10; i++)
{
    printf(" %d",frquency_arr[i]);
}
printf("\n");
///////////////////////// Printing Mode value of array /////////////////////////////
max_freq=frquency_arr[0];
  // storing the largest number to arr[0]
for (int i = 1; i < 10; ++i) 
  {
      if (max_freq< frquency_arr[i]) 
    	    {
                 max_freq = frquency_arr[i];
            }
  }
printf("Largest frquency is = %d", max_freq);
/////////////////////////// Largest frequency element //////////////////////////////
printf("\n");
for (int i = 0; i < 10; i++)
{
    if (max_freq==frquency_arr[i])
    {
        mode = i;
        break;
    }
}
printf("Mode of 2-d Array is: %d",mode);
printf("\n");
}
////////////////////////////////   END  /////////////////////////////////////////////
