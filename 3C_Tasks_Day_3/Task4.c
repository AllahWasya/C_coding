/*
Athor : Allah Wasaya
Company : AQL TECH SOLUTIONS

1. This Code Takes 25 random integer values from user placed in 5x5 2-D Matrix.
2. It Prints frequency of each element.
3. It prints Maximum Frequecy.
4. Its prints Mode.

*/
#include<stdio.h>
int main()
{
  int const LENGTH=5;
  int const WIDTH=5;   
  int values[LENGTH][WIDTH];
  int frquency_arr[LENGTH][WIDTH];
  int count=0;
  int max_freq=0;
  int mode;
  printf("                                          \n");
  printf("==========================================\n");
  printf("Enter any 25 integers.....................\n");
  printf("                                          \n");

////////////////////// Taking input and storing it in an Array //////////////////////
for(int i=0; i < LENGTH; i++) 
  {  
    for (int j = 0; j < WIDTH; j++)
    {
         printf("Enter value for array[%d][%d] : ",i,j);
         scanf("%d", &values[i][j]);
    }
  }
///////////////////// Printing all values placed in Array ///////////////////////////
printf("Values inside arrays .. \n");
for (int i = 0; i < LENGTH; i++)
{
    for (int j = 0; j < WIDTH; j++)
    {
        printf("  %d",values[i][j]);
    }
    printf("\n");
}
//////////////////////////  Checking Mode ////////////////////////////////////////////
for (int i = 0; i < LENGTH; i++)
{
    for (int j = 0; j < WIDTH; j++)
    {
         for (int k = 0; k < LENGTH; k++)
           {
              for (int p = 0;  p< WIDTH; p++)
                 {
                       
                       if (values[i][j]==values[k][p])
                           {
                               count=count+1;
                           }         
                 }
       
            }

        frquency_arr[i][j] = count;
        count=0;
    }
}
////////////////////////////// Printing Frequency /////////////////////////////////////
printf("Printing Frequency of Array Each Elements in an array is.. \n");
for (int i = 0; i < LENGTH; i++)
{
    for (int j = 0; j < WIDTH; j++)
    {
        printf(" %d",frquency_arr[i][j]);
    }
    printf("\n");
    
}
printf("\n");
///////////////////////////////////////////////////////////////////////////////////////
max_freq=frquency_arr[0][0];
int s=0;
int t=0;
  // storing the largest number to arr[0]
for (int i=0; i<LENGTH; i++)
{
for (int j = 0; j < WIDTH; j++) {
    if (max_freq< frquency_arr[i][j]) {
      max_freq = frquency_arr[i][j];
      s=i;
      t=j;
    }
  }
}
printf("Largest frquency is = %d", max_freq);
printf("\n");
printf("Mode of this array is : %d", values[s][t]);
printf("\n");
}
///////////////////////////////////// END //////////////////////////////////////////////
