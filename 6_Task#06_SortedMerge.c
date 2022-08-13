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
  struct node *newNode;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;

  struct node *ptr;

  if (*head1 == NULL || (*head1)->data>= newNode->data)
  {
        newNode->next=*head1;
        *head1=newNode;
  }
  else
  {
   ptr=*head1;
   	while ((ptr->next != NULL && ptr->next->data < newNode->data))
   		{
      			ptr=ptr->next;
   		}
    newNode->next=ptr->next;
    ptr->next=newNode; 
  }
}

void append2(struct node **head2, int data)
{
  struct node *newNode;
  newNode =(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;

  struct node *ptr;

  if (*head2 == NULL || (*head2)->data>= newNode->data)
  {
        newNode->next=*head2;
        *head2=newNode;
  }
  else
  {
   ptr=*head2;
   	while ((ptr->next != NULL && ptr->next->data < newNode->data))
   		{
      			ptr=ptr->next;
   		}
    newNode->next=ptr->next;
    ptr->next=newNode; 
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
append1(&head1,37);
append1(&head1,48);
append1(&head1,59);
append1(&head1,20);
append2(&head2,80);
append2(&head2,60);
append2(&head2,65);
printf("Display Merged List\n");
mergeList(&head1,&head2);
display(head1);
}
