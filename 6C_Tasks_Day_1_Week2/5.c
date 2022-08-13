#include<stdio.h>
#include<string.h>
int mystrcpy(char str1[],char str2[])
{
    int i;
    while (str1[i] != '\0')
    {
        str2[i]=str1[i];
        i++;
    }
    
}
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter any String ..");
    scanf("%s",str1);
    mystrcpy(str1,str2);
  //  toupper(str1);
    printf("%s",str2);
}