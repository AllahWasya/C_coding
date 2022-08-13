#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printd(char *C)
{  
   int i ;
   while (*(C+i)!= '\0')
   {
      printf("%c\n",*(C+i));
      i++;
   }
}
int main()
{
    char C[6]="Hello";
    printd(C);
}