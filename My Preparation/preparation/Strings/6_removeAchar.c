#include<stdio.h>
#include<string.h>
void removechar(char *str,char c)
{
    int i=0;
     while (*str !='\0')
     {
        if (*(str+i) != c)
        {
           printf("%c",*(str+i));
        }
     str=str+1;
     }
}
int main()
{
    char str[20]="Wasaya";
    char c={'y'};
    removechar(str,c);
}