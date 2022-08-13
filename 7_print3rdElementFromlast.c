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
void check_3rd_element_from_last(struct node **head)
{
    int elements=0;
    struct node *ptr=*head;
while (ptr)
    {
       ptr=ptr->next;
       elements++;
    }
printf("%d\n",elements);
ptr=*head;

for (int i = 1; i < elements-3+1; i++)
    {
       ptr=ptr->next;
    }
 printf("Third Element from last is: %d\n",ptr->data);
    
 }
void display(struct node *head)
{
   struct node *ptr1;
   ptr1=head;
    if (ptr1)
    {
       printf("%d\n",ptr1->data);
       display(ptr1->next);
    }
}

int main()
{
struct node *head =NULL;\
printf("Appending nodes using iterative and Recursive functions\n");
add_EndNode_without_R(&head,67);
add_EndNode_without_R(&head,68);
add_EndNode_without_R(&head,69);
add_EndNode_without_R(&head,15);
add_EndNode_without_R(&head,69);
add_EndNode_without_R(&head,70);
check_3rd_element_from_last(&head);
display(head);
}
