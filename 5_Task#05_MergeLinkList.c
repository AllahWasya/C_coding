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

void append1(struct node **head1, int data)
{
  struct node *newNode, *ptr;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;
  
  if (!*head1)
  {
     *head1= newNode;
  }
  else
  {
    ptr=*head1;
    	while(ptr->next != NULL)
    		{
     			ptr=ptr->next;
    		}
    	ptr->next =newNode;
  }
}

void append2(struct node **head2, int data)
{
  struct node *newNode, *ptr;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;
  
  if (!*head2)
  {
     *head2= newNode;
  }
  else
  {
    ptr=*head2;
    	while(ptr->next != NULL)
    		{
     			ptr=ptr->next;
    		}
    ptr->next =newNode;
  }
}
void mergeList(struct node **head1,struct node **head2)
{
  struct node *ptr;
  ptr=*head1;
    while (ptr->next)
    {
       ptr=ptr->next;
    }
    ptr->next=*head2;
    *head2=NULL;
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
struct node *head1 =NULL;
struct node *head2 =NULL;
printf("Display Linklist 1\n");
append1(&head1,67);
append1(&head1,68);
append1(&head1,69);
append1(&head1,70);
display(head1);
printf("Display LinkList 2\n");
append2(&head2,69);
append2(&head2,70);
display(head2);
printf("Display Merged List\n");
mergeList(&head1,&head2);
display(head1);
}
