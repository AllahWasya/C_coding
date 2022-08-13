/*

Printing Data


*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void print_data(struct node *head)
{
    int count=0;
    if (head==NULL)
    {
       printf("Linklist is empty \n");
    }
    struct node *ptr=head;
    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
   // printf("No of linklist are : %d\n",count);
}
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

    print_data(head);
}