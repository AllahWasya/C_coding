#include<stdio.h>
#include<string.h>
int main()
{ 
    char A[50];
    char B[50];
    char C[50];
    char D[50];
  //  char *ptr =A;
    printf("Enter any string:");
   // scanf("%s",A);
    fgets(A, sizeof(A), stdin);  // read string
    printf("Enter any string:");
    fgets(B, sizeof(B), stdin);  // read string
   // scanf("%s",B);
 
  /*  printf("%s",A);
    printf("%s",B);*/
//strcmp 
    int result = !strcmp(A,B);  // if strings are equal then output will be 1, else output will be zero
    printf("%d\n",result);
// strcpy
       strncpy(C,A,3);
       strncpy(D,B,3);
// strcat
      printf("%s",strcat(C,D));
//strlwr()
   //   printf("%c\n",tolower(B));
}