#include<stdio.h>
#include<stdlib.h>

struct node
{
   int Value;
   struct node *next;
};

void appendNode(struct node **head,int num)
{
    struct node *newNode, *Ptr;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->Value = num;
    newNode->next = NULL;
    if (!*head)
    {
        *head = newNode;
        //printf("head\n");
    }
    else 
    {
        Ptr = *head;
        while (Ptr->next != NULL)
        {   
            Ptr = Ptr->next;
          //  printf("loop\n");
        }
    Ptr->next = newNode;
    }
}

void display(struct node *head)
  {
    struct node *ptr=head;
    while (ptr != NULL)
    {
        printf("%d\n",ptr->Value);
        ptr=ptr->next;
    }   
  }

int main()
{
   struct node* head =NULL;
   appendNode(&head,7);
   appendNode(&head,8);
   appendNode(&head,9);
   display(head);
}
