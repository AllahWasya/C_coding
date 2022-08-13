#include<stdio.h>
#include<string.h>
void recusion(char A[],int ind)
{
  int len=strlen(A)-(ind+1);
  if (A[len] == A[ind])
  {
     if ((ind+1) == len || ind ==len)
     {
        printf("String is Palendrome");
        return;
     }
     recusion(A,ind+1);
  }
  else
  {
    printf("String is not Palendrome\n");
  }
}
int main()
{   
    char A[50];
    printf("Enter any string:");
    scanf("%s",A);
    recusion(A,0);
 }