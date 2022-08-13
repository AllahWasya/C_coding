// #include<stdio.h>
// int Fabocoi(int x)
// {
//     int first=0;
//     int second =1;
//     int result=0;
//     for (int i = 0; i < x; i++)
//     {

//         result=first+second;
//         first=second;
//         second=result;
//         printf("%d ",result);
//     }
   
// }
// int main()
// {
//     int x=20;
//     Fabocoi(x);
    
// }
///////////////////////////////////////////////
#include<stdio.h>
int Fabocoi(int x, int first, int second, int result)
{
   if (x)
   {
     printf("%d ",result);
     x--;
    result=first+second;
    first=second;
    second=result;
     Fabocoi(x,first,second,result);
   }
   else
   return 0;  
}
int main()
{
    int x=20;
    int first=0;
    int second=1;
    int result=0;
    Fabocoi(x,first,second,result);
    
}