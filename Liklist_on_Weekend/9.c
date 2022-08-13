/*

Insertion at the End and at Start (Linked List vs. Array) - Part 1
pass by reference concept in adding at start

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
void add_node_at_end(struct node *head, int data)
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
struct node* add_node_at_start(struct node **head, int data)
{
     struct node *ptr1=malloc(sizeof(struct node));
     ptr1 ->data=data;
     ptr1 ->link=NULL;
     ptr1 ->link=*head;
     *head=ptr1;
     //return head;
}
void print_data(struct node *head)
{
   
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
    // Creating   Only 1st node and adding further nodes by just calling the add function
    struct node *head = (struct node*) malloc(sizeof(struct node)); 
    head -> data=5;             
    head -> link=NULL;
    struct node *ptr=head;
    add_node_at_start(&head,100);
    add_node_at_start(&head,200);
    add_node_at_end(head,67);
    add_node_at_end(head,95);
    add_node_at_end(head,74);
    add_node_at_end(head,74);
   
//     ptr=head;

//    while (ptr != NULL)
//    {
//     printf("%d\n",ptr->data);
//     ptr = ptr->link;
//    }
   print_data(head);
   count_no_of_linklist(head);
   return 0;
}