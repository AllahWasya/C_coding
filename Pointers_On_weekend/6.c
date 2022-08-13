/*

*/
#include<stdio.h>
#include<string.h>
int main()
{
    // char C[6];
    // C[0]='A';
    // C[1]='B';
    // C[2]='C';
    // C[3]='D';
    // int len=strlen(C);
    // printf("%d  %c\n",len,C[2]);
   char C1[5]="Hello";
   printf("%s\n",C1);
   char *C2;
   C2=C1;
   printf("%c\n",*(C2+3));

   char *arr[]={"hello pakistan",
                "I am Wasaya"};
   printf("%s\n",arr[1]);
   printf("%c",*(arr[0]+1));
}