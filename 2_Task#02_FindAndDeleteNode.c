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

void add_EndNode_without_R(struct node **head, int data)
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

void find_and_del_node(struct node **head, int data)
{
   struct node *ptr;
   struct node *current;
   struct node *previous;

   current=*head;
   previous=*head;
   ptr=*head;
	if (*head ==NULL)
	{
   		printf("Head is Empty\n");
	}


	else if ((*head)->data==data) 
   	{
      		ptr=*head;
      		*head=(*head)->next;
      		free(ptr);
      		head=NULL;
   	}
	else
   	{
      		while (ptr->data != data)
      			{
         			ptr=ptr->next;
         			previous=current;
         			current=current->next;
      			}
      		previous->next=current->next;
      		free(ptr);
      		ptr=NULL;
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
add_EndNode_without_R(&head,67);
add_EndNode_without_R(&head,68);
add_EndNode_without_R(&head,69);
add_EndNode_without_R(&head,70);
find_and_del_node(&head,68);
find_and_del_node(&head,70);
display(head);
}
