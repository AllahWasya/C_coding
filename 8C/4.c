#include<stdio.h>
void reverse(char *str)
{
   if (*str != '\0')
   {
    reverse(str+1);
    printf("%c ",*str);
   }
   
}
int main()
{
    char str[20]="Hello";
    reverse(str);
}