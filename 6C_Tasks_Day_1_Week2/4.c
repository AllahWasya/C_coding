#include <stdio.h>
int mystr_compare(char str1[], char str2[])
{
int a=0;
for(int i=0; str1[i] != '\0' || str2[i] != '\0'; i++)
   if (str1[i] != str2[i])
   {
     a++;
   }
if (a !=0)
{
   return -1;
}
else
   return 0;
}


int main()
{
    char str1[10];
    char str2[10];
    printf("Enter the First string..");
    scanf("%s",str1);
    printf("\n");
    printf("Enter the Second string..");
    scanf("%s",str2);
   // fgets(str1,sizeof(str1),stdin);
     int result=mystr_compare(str1,str2);
     printf("%d\n",result);
}