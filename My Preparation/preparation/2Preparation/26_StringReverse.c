// #include<stdio.h>
// void reverse(char *str)
// {
//   while (*str != '\0')
//   {
//      printf("%c",*(str));
//      str++;
//   }
// }
// int main()
// {
//     char str[20]="Wasaya";
//     reverse(str);
// }

#include<stdio.h>
void reverse(char *str)
{
  if (*str != '\0')
  {
     reverse(str+1);
     printf("%c",*str);
  }
}
int main()
{
    char str[20]="Wasaya";
    reverse(str);
}

// #include<stdio.h>
// #include<string.h>
// void swap(char *str)
// {
//     if (*str)
//     {
//         swap(str+1);
//     }
//         printf("%c", *str);
// }
// int main()
// {
//     char str[20] ="WasayaKhan";
//     swap(str);
// }