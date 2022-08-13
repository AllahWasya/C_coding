/*

Inserting list at the end 

*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_no_of_linklist(struct node *head)
{
    int count=0;
    if (head==NULL)
    {
       printf("Linklist is empty \n");
    }
    struct node *ptr=head;
    while (ptr != NULL)
    {
        count++;
        ptr=ptr->link;
    }
    
    printf("No of linklist are : %d\n",count);
}
void add_node(struct node *head, int data)
{
     struct node *ptr, *temp;
     ptr =head;
     temp=(struct node*) malloc(sizeof(struct node));
     temp ->data=data;
     temp ->link=NULL;

     while (ptr->link != NULL)
     {
        ptr=ptr->link;
     }
       ptr->link=temp;
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
    add_node(head,67);
    count_no_of_linklist(head);
}