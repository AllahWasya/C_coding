#include<stdio.h>
void reverse(char *str)
{
    if (*str != '\0')
    {
        if (*str == '$')
        {
            printf("%c",*str);
            str++;
        }
    
         reverse(str+1);
         printf("%c",*str);
    }
   
}
int main()
{
   char str[]="Wasa$ya";
   reverse(str);
}