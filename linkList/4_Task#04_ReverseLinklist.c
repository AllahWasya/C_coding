#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next; 
};

void add_node_with_out_recursion(struct node **head, int data)
{
  struct node *newNode, *ptr;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;
  
  if (!*head)
  {
     *head= newNode;
  }
  else
  {
    ptr=*head;
    while(ptr->next != NULL)
    {
     ptr=ptr->next;
    }
    ptr->next =newNode;
  }
}
void display(struct node *head)
{
   struct node *ptr1;
   ptr1=head;
    while(ptr1)
    {
       printf("%d\n",ptr1->data);
       ptr1=ptr1->next;
    }
}
void reverse_Recursion(struct node **head)
{
    struct node *ptr;
    ptr=*head;
    if (ptr == NULL)
    {
        return;
    }
    reverse_Recursion(&(ptr)->next);
}

void reverseList(struct node **head)
{
    struct node *previousNode, *currentNode;

    if((*head) != NULL)
    {
        previousNode = *head;
        currentNode = (*head)->next;
        *head = (*head)->next;

        previousNode->next = NULL; // Make first node as last node

        while((*head) != NULL)
        {
            *head = (*head)->next;
            currentNode->next = previousNode;

            previousNode = currentNode;
            currentNode = *head;
        }

        *head = previousNode; // Make last node as head

        printf("Reversed Without Recursion\n");
    }
}


int main()
{
  struct node *head=NULL;
  add_node_with_out_recursion(&head,81);
  add_node_with_out_recursion(&head,82);
  add_node_with_out_recursion(&head,83);
  add_node_with_out_recursion(&head,84);
  printf("Original\n");
  display(head);
  reverseList(&head);
  display(head);
  reverse_Recursion(&head);
  printf("Reversed with Recursion\n");
  display(head);
}
