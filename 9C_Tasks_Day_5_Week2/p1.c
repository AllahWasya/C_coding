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
struct node* add_node_at_start(struct node **head, int data)
   {
     struct node *ptr1=malloc(sizeof(struct node));
     ptr1 ->data=data;
     ptr1 ->link=*head;
     *head=ptr1;

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

void display(struct node *head)
  {
   
    struct node *ptr=head;
    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }   
  }

void display_recursion(struct node *head)
{
    printf("%d\n",head->data);
 
    if (head->link=NULL)
    {
       return;
    }
    display_recursion(head->link);
return;
}
// void delete(struct node **head)

// {
//   if (!*head)   
//   {
//    return;
//   }
//   delete(&(*head)->link);
//   free(*head);
//   *head=NULL;
// }
void delete(struct node **head)

{
  if (!*head)   
  {
   return;
  }
   struct node* temp=head;
   *head=(*head)->link;
   free(temp);
   delete(&(*head));
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
    add_node_at_end(head,500);
    display(head);
   // display_recursion(head);
    //delete(&head);
    display(head);
    return 0; 
  }