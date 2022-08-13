#include <stdio.h>

void reverse();
int main() {
   char name[20] ="Wasaya";
   reverse(name);
}

void reverse(char *name)
{
  if (*name != '\0')
  {
    reverse(name+1);
    printf("%c ",*name);
  }
  
}
    
  