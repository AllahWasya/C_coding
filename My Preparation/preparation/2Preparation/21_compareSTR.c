#include<stdio.h>
int my_strcmp(char str1[],char str2[])
{
   int a=0;
   for (int i = 0; str1[i] !='\0' || str2[i] != '\0'; i++)
   {
       if (str1[i] != str2[i])
       {
           a++;
       }   
   }
if (a != 0)
{
    return -1;
}
else
{
    return 0;
}
}
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter String 1: ");
    scanf("%s",str1);
    printf("Enter String 2: ");
    scanf("%s",str2);
    int z=my_strcmp(str1,str1);
    printf("%d",z);
}