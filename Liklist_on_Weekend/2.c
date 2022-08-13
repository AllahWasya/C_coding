// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct node *head =NULL; // head node created
//     struct node *first =NULL; // head node created
//     struct node *second =NULL; // head node created
//     head=(struct node*) malloc(sizeof(struct node)); // crated memory location for head node
//     first=(struct node*) malloc(sizeof(struct node));  // crated memory location for first node
//     second=(struct node*) malloc(sizeof(struct node));  // crated memory location for first node
//     head ->data=5;             
//     head ->link=first;
//     first->data=7;
//     first ->link=second;
//     second ->data=9;
//     second ->link=NULL;
//     printf("%d\n",head->data);
//     printf("%d\n",first->data);
//     printf("%d\n",second->data);
   
//     printf("%p\n",head);     // head address
//     printf("%p\n",first);    // first address
//     printf("%p\n",second);   // 2nd address


//     printf("%p\n",head->link->link->link);   // head address -> first address -> 2nd Address 
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

--------------               -----------------              ------------------         
|Data=5|*first  --->         | Data=7 |*second|      --->   | Data=9 | NULL  |        
--------------               ------------------             ------------------         
   Head                            First                           Second
     
     ^
     |
------------
    *Head  |
------------

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
    struct node *first =NULL; // head node created
    struct node *second =NULL; // head node created
    head=(struct node*) malloc(sizeof(struct node)); // crated memory location for head node
    first=(struct node*) malloc(sizeof(struct node));  // crated memory location for first node
    second=(struct node*) malloc(sizeof(struct node));  // crated memory location for first node
    head ->data=5;             
    head ->link=first;
    first->data=7;
    head->link->link=second;        // accessing link part of 2nd node with head
    second ->data=9;
    head ->link ->link ->link=NULL;          
    printf("%d\n",head->data);
    printf("%d\n",first->data);
    printf("%d\n",second->data);
   
    printf("%p\n",head);     // head address
    printf("%p\n",first);    // first address
    printf("%p\n",second);   // 2nd address


    printf("%p\n",head->link->link);   // head address -> first address -> 2nd Address 
}