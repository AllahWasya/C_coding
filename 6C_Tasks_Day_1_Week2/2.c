#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[]= "Wasaya";
    char copy[strlen(name)];
    printf("\nLenghth: %ld\n\n",strlen(name));
    strcpy(copy,name);
    printf("String copy is: %s\n\n",copy);
    strcat(copy," Khan");
    printf("String copy is: %s\n\n",copy);
    printf("%ld\n",strlen(copy));
    int val = atoi(name);
 //   printf("%s\n",strupr(name));
    int val=atoi(name);
    printf("\n%d",val);
}