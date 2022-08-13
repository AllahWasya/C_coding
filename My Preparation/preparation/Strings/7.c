// #include<stdio.h>
// typedef struct foo_struct
// {   
//     int x;
//     char *z;
//     char y;} foo;
// int main()
// {
// //   foo *f = (foo *) malloc(sizeof(foo));
// //   foo *f = (foo *) malloc(sizeof(foo) * 10);
// foo a; 
//   printf("%ld\n",sizeof(foo));
//   printf("%ld\n",sizeof(a.x));
//   printf("%ld\n",sizeof(a.z));
//   printf("%ld\n",sizeof(a.y));
// //   printf("%ld\n",sizeof(int));
// //   printf("%ld\n",sizeof(int*));
  
// }


#include<stdio.h>
typedef struct foo_struct
{   
    int  x;
    char *z;
    char y;
    // char a;
    // char *b;
    } foo;
int main()
{
//   foo *f = (foo *) malloc(sizeof(foo));
//   foo *f = (foo *) malloc(sizeof(foo) * 10);
foo a; 
  printf("%ld\n",sizeof(foo));
  printf("%ld\n",sizeof(a.x));
  printf("%ld\n",sizeof(a.z));
   printf("%ld\n",sizeof(a.y));
//   printf("%ld\n",sizeof(int));
//   printf("%ld\n",sizeof(int*));

}
