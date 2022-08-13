/*
Athor : Allah Wasaya
Company : AQL TECH SOLUTIONS

1. This Code Takes 25 integer from user in range 0-9 values in 1-D Matrix.
2. It Prints frequency of each elements from 0-9.
3. It prints Maximum Frequecy.
4. Its prints Mode.

*/
#include<stdio.h>
int main()
{ 
  int const LENGTH=25;   
  int values[LENGTH];
  int frquency_arr[10];
  int count=0;
  int max_freq;
  int mode;
  printf("Enter 25 integers between 1-9: \n");
  printf("============================== \n");
  printf("                               \n");
//////////////////// Taking input and storing it in an Array //////////////////////

for(int i=0; i < LENGTH; i++) 
  {  
     printf("Enter value for arr[%d] : ", i);
     scanf("%d", &values[i]);
  }
// Check all values placed in Array
printf("Values inside 1-D arrays are....  ");
for (int i = 0; i < LENGTH; i++)
{
    printf(" %d",values[i]);
}
// checking mode 
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < LENGTH; j++)
    {
        if (i==values[j])
        {
            count=count+1;
        }
    }
    frquency_arr[i] = count;
    count=0;
}
////////////////////////// Printing Frequency of the Array ////////////////////////
printf("\n");
printf("                               \n");
printf("Printing Frequency of Array Elements.. \n");
printf("                               \n");
for (int i = 0; i < 10; i++)
{
    printf("Frequency of Element '%d' is:  %d\n",i,frquency_arr[i]);
}
/////////////////////////// Finding Largest Element in Array ///////////////////////
max_freq=frquency_arr[0];
  // storing the largest number to arr[0]
for (int i = 1; i < 10; ++i) {
    if (max_freq< frquency_arr[i]) {
      max_freq = frquency_arr[i];
    }
  }
printf("\n");
printf("Largest frquency is = %d", max_freq);
/////////////////////////// Largest frequency element //////////////////////////////
for (int i = 0; i < 10; i++)
{
    if (max_freq==frquency_arr[i])
    {
        mode = i;
        break;
    }
}
printf("\n");
printf("Mode of 1-D Array is: %d",mode);
printf("\n");
}
////////////////////////////////  END ///////////////////////////////////////////////
