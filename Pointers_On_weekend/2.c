/*
Concept of pointer to pointer and Dereferencing 
*/
#include <stdio.h>
int main()
{
    int x=7;
    int *p1;
    p1=&x;
    int **p2;
    p2= &p1;
    int ***p3;
    p3= & p2;
    printf("p1 has address of %p, its own address is: %p\n",&p1, p1);
    printf("p2 has address of %p, its own address is: %p\n",&p2, p2);
    printf("p3 has address of %p, its own address is: %p\n",&p3, p3);

    // Through dereferencing we can change value of x......
    ***p3=8;
    printf("%d\n",x);
    // *p3 will be address of p2; 
    printf("%p\n", *p3);
        // **p3 will be address of p1; 
    printf("%p\n", **p3);

    printf("Size of p1 p2 and p3 is .. %ld  %ld  %ld\n",sizeof(p1),sizeof(p2),sizeof(p3));

}