#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
	if(head==NULL)
		return 0;
	node *fast=head->next,*slow=head;

	while(fast!=NULL){
		if(fast==slow)
				return 1;
		if(fast->next!=NULL){
			fast=fast->next->next;
			slow=slow->next;
		}
		else
			fast=fast->next;
	}
	return 0;
    /* TODO: Implement ll_has_cycle */
}
