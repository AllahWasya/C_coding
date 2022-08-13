// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int r=3;
//     int c=4;
//     int *ptr;
//     ptr=(int*)malloc((r*c)*sizeof(int));
//     for (int i = 0; i < r*c; i++)
//     {
//        ptr[i]=i+1;
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ",ptr[i*c+j]);
//         }
//         printf("\n");
//     }
//     free(ptr);   
// }

////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int r=3,c=4;
   int *array[r];
   for (int i = 0; i < r; i++)
   {
       array[i]=(int*)malloc(c*sizeof(int));
   }
int static count=0;
   for (int i = 0; i < r; i++)
   {
       for (int j = 0; j < c; j++)
       {
           array[i][j]=count;
           count++;
       }
   }

 for (int i = 0; i < r; i++)
   {
       for (int j = 0; j < c; j++)
       {
           printf("%d ",array[i][j]);
       }
   }
}

