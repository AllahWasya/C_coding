 #include<stdio.h>
#include<string.h>
int main()
{   
    char A[50];
    char *ptr1;
    char *ptr2;
    char B[50];
    int result=0;
    printf("Enter any string:");
    fgets(A, sizeof(A), stdin);  // read string
    int  len= strlen(A);
    printf("%s %d",A, len);
    for (int i = 0; i < len; i++)
    {
        B[i]=A[len-1-i];
    }
    // printf("%s",B);
    // printf("\n");
    // printf("%s",A);
    // printf("%c",A[0]);
    // printf("%s",B);
int compare=strcmp(A,B); // calling stringcompare() function.  
if(compare==0)  
printf("strings are equal");  
else  
printf("strings are not equal");  
return 0;  


// for (int i = 0; i < len; i++)
// {
//     if ( B[i] == A[i])
//        printf("Charcters are equal \n");
//     else
//     printf("Char are not equal ..\n");
   
// }
//    if (A[0]==B)
//    {
//     printf("\nCharacters are equal");
//    }
//  result = strcmp(*A, *B);
// printf("%d",result);
// comparing strings str1 and str2
//   result = strcmp(A, B);
//   if (result == 0)
//   {
//     printf("String is palendrome");
//   }
//   else
//   printf("String is not palendrome");
}