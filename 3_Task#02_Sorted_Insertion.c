/*
Author: Allah Wasaya
Company: AQL Tech Solutions
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};

void add_node_with_out_recursion(struct node **head, int data)
{
  struct node *newNode;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;

  struct node *ptr;

  if (!*head)
  {
      *head=newNode;
  }
  else if (newNode->data <=(*head)->data)
  {
        newNode->next=*head;
        *head=newNode;
  }
  
  else
  {
   ptr=*head;
   	while ((ptr->next != NULL && newNode->data > ptr->data))
   		{
      			ptr=ptr->next;
   		}
    newNode->next=ptr->next;
    ptr->next=newNode; 
  }
}

void add_node_with_recursion(struct node **head, int data)
{
  struct node *newNode;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;

  struct node *ptr;

  ptr=*head;

  if (!*head)
  {
      *head=newNode;
  }
  else if (newNode->data <=(*head)->data)
  {
        newNode->next=*head;
        *head=newNode;
  }
  
  else if ((ptr->next != NULL && newNode->data)>ptr->next->data)
   		{
      			add_node_with_recursion(&(ptr->next),data);
   		}
  else 
  {
    newNode->next=ptr->next;
    ptr->next=newNode; 
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

int main()
{
struct node *head =NULL;
add_node_with_out_recursion(&head,67);
add_node_with_out_recursion(&head,77);
add_node_with_recursion(&head,78);
add_node_with_recursion(&head,75);

display(head);
}
