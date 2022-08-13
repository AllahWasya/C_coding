// #include<stdio.h>
// int reverseBits(int num) 
// { 
//     // int rev = 0;
//     // int res=0;
//    int y=0,b=0;
//     while (num > 0)
//     { 
//         b=num&1; 
//         num=num>>1;
//         y=y<<1; 
//         y=y|b;  
//     } 
//     return  y;
// }
// int main()
// {
//     int n=8;
//     int z=reverseBits(n);
//     printf("%d\n",z);
    
// }

// #include<stdio.h>
// int reverseBits(int num) 
// { 
//     // int rev = 0;
//     // int res=0;
//    int static y=0,b=0;
//     if (num > 0)
//     { 
//         b=num&1; 
//         y=y<<1; 
//         y=y|b; 
//         reverseBits(num>>1); 
//     } 
//     return y;
// }
// int main()
// {
//     int n=11;
//     int z=reverseBits(n);
//     printf("%d\n",z);
    
// }


////////////////////////////////////////
// #include<stdio.h>
// int reverseBits(int num) 
// { 
//     // int rev = 0;
//     // int res=0;
//    int y=0,b=0;
//   for (int i=0; i<32; i++)
//     { 
//         b=num&1; 
//         num=num>>1;
//         // b=num&1; 
//         // num=num>>1;
//          y=y>>1; 
//          y=y|b;  
//     } 
//     return  y;
// }
// int main()
// {
//     int n=8;
//     int z=reverseBits(n);
//     printf("%d\n",z);
    
// }