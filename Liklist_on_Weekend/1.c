/*

Printing number of linklist

*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head =NULL; // head node created
    struct node *first =NULL; // first node created
    head=(struct node*) malloc(sizeof(struct node)); // crated memory location for head node
    first=(struct node*) malloc(sizeof(struct node));  // crated memory location for first node
    head ->data=5;             
    head ->link=first;
    first->data=7;
    first ->link=NULL;
    printf("%p\n",head->link->link->link);
}

/*

-----------               -----------------              ------------------
|   Head   |      --->    | Data=5 |*first |      --->   | Data=7 | NULL  |
-----------               ------------------             ------------------


*/