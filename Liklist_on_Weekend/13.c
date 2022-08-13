/*
Single Linked List (Deleting the any central position)
*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void del_pos(struct node **head, int position)
{
    struct node *current = *head;
    struct node *previous =*head;
    if (*head == NULL)
    {
        printf("List is already  empty\n");
    }
    else if (position==1) 
    {
       *head = current ->link;
       free(current);
       current=NULL;
    }
    else
    {
        while (position !=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous ->link =current ->link;
        free(current);
        current=NULL;
    }
}
struct node* del_last_node(struct node *head)
{
if (head==NULL)
    printf("Linklist is empty\n");
    else if (head->link==NULL)
    {
       free(head);
       head=NULL;
    }
    else
    {
        struct node *temp=head;
        struct node *temp2=head;
        while (temp->link !=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2 ->link =NULL;
        free(temp);
        temp=NULL;
    }
    return head;
}
struct node* del_1st_node(struct node *head)
{
    if (head==NULL)
    printf("Linklist is empty\n");
    else
    {
          struct node *temp=head;
          head =head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}
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
void add_at_pos(struct node *head,int data, int pos)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->link=NULL;

    pos--;

    while (pos !=1)
    {
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
    
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
    add_node_at_end(head,77);
    add_node_at_end(head,75);
    add_at_pos(head,33,5);
    head=del_1st_node(head);
    head=del_last_node(head);
    del_pos(&head,1);
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