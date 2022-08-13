/*
pointers and dynamic memory
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     int *p;
//     int count=0;
//    // for (int i = 0; i < 10000; i++)
//    // {
//           p = (int*) malloc(1*sizeof(int));
//           //   count++;
//           //  printf("%p\n",p);
//    // }
    
//     // p = (int*) malloc(sizeof(int)); 
//      printf("%p\n",p);     
//     // *p=6;
//     //free(p);
//       p = (int*) malloc(16711568*sizeof(int));
//        printf("%p\n",p); 
   
//      //*p=6;
// }
////////////////////////////////////////////////////////////////
#include <stdlib.h>

int main() {
int *p;
while(1) {
    int inc=1024*1024*sizeof(char);
    p=(int*) calloc(1,inc);
    if(!p) break;
    }
}