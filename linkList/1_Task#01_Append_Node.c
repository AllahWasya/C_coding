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

void add_EndNode_with_R(struct node **head, int data)
{
     struct node *ptr, *temp;
     ptr =*head;
     temp=(struct node*) malloc(sizeof(struct node));
     temp ->data=data;
     temp ->next=NULL;
   if (!ptr)
   {
      ptr=temp;
   }
   
   else if (ptr->next==NULL)
   {
      ptr->next=temp;
      return;
   }
   else
   {
       add_EndNode_with_R(&(ptr->next),data);  
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
struct node *head =NULL;\
printf("Appending nodes using iterative and Recursive function\n");
add_EndNode_without_R(&head,67);
add_EndNode_without_R(&head,68);
add_EndNode_without_R(&head,69);
add_EndNode_without_R(&head,70);
add_EndNode_with_R(&head,90);
add_EndNode_with_R(&head,77);
add_EndNode_with_R(&head,100);
display(head);
}
