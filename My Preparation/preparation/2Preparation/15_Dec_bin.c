// #include<stdio.h>    
// #include<stdlib.h>  
// int main(){  
// int a[10],n,i=0;    
// printf("Enter the number to convert: ");    
// scanf("%d",&n);    

// while (n>0)    
// {    
// a[i]=n%2;    
// n=n/2;
// i++;    
// }    
// printf("\nBinary of Given Number is=");    
// for(i=i-1;i>=0;i--)    
// {    
// printf("%d",a[i]);
// }   
// printf("\n\n"); 
// return 0;  
// }  


// #include <stdio.h>

// int main()
// {
//   int decimal_num, c, result;

//   printf("Enter an integer in decimal number system\n");
//   scanf("%d", &decimal_num);

//   for (c = 31; c >= 0; c--)
//   {
//     result = decimal_num >> c;

//     if (result & 1)
//       printf("1");
//     else
//       printf("0");
//   }

//   printf("\n");

//   return 0;
// }
#include<stdio.h>
int conv(int n)
{
  int rem;
  if (n>0)
  {
    rem=n%2;
    conv(n/2);
    printf("%d ",rem);
  }
  
}
int main()
{
  conv(8);

}



