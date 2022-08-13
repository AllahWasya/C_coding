#include "ll_cycle.h"

#include <stddef.h>

int ll_has_cycle(node *head) 

{

  if (head == NULL || head->next == NULL) 
  {
     return 0;
  }
  
  node *slowptr = head, *fastptr = head;
  
  while (fastptr && fastptr->next) 
  {
      fastptr = fastptr->next->next;
      slowptr = slowptr->next;
  	  
  	  if (slowptr == fastptr) 
  		  {
    			return 1;
    		  }
   }
  
  return 0;
}
