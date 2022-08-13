#include<stdio.h>
int main()
{   
   
   char *C1[]={"WXYZ","ABC"}; // String
   char S1[4] ="ABCD";
    char* S2;
    S2=S1;
    printf("%s\n",S1);
    printf("%p\n",S2);
    char *p = "abc"; 
    printf("%s\n",p+1); // finds null '\0' to stop printing
    
    printf("%c\n",*(C1[0]+1));
}