#include<stdio.h>
#include<string.h>
void upper_case(char str1[], char str2[]);
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter a string ..");
    scanf("%s",str1);
    upper_case(str1,str2);
    // puts(str1);
    puts(str2);
}
void upper_case(char str1[], char str2[])
{
    int i=0;
    while (str1[i])
    {
        str2[i]=str1[i]-32;
        i++;
    }
}