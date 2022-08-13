#include<stdio.h>
void delete(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' )
        {
            printf("%c",str[i]);
        }
         i++;
    }
}
int main()
{
   char str[20]="We are pakistani";
   delete(str);
}