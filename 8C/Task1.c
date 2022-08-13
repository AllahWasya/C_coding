#include <stdio.h>
#include<string.h>
// int palindrome_check(char s, int start, int end)
// {
//     if(end-start==1 || start==end)
//     {
//         return 1;
//     }
//     if(s[start]==s[end])
//         {
//             return palindrome_check(s,start+1,end-1); 
//         }
//         else
//         {
//             return 0;
//         }
//     }
int main()
{
   //string s;
   //cin>>s;
   char s[50];
   printf("Enter any string:");
   fgets(s, sizeof(s), stdin);  // read string
   int  n= strlen(s); 
   //int n=s.length();
   if(palindrome_check(s, 0, n-1))
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }
   return 0;
}