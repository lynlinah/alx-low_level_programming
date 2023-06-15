#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index -  takes a double pointer
 * @head: an argument, representing the pointer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return(-1);
	current = *head;
	 if (index == 0)
	 {
		 *head = current->next;
		 if (*head != NULL)
			 (*head)->prev = NULL;
		 free(current);
		 return(1);
	 }

	 while (current != NULL)
	 {
		 if (count == index)
		 {
			 temp = current->prev;
			 temp->next = current->next;
			 if (current->next != NULL)
				 current->next->prev = temp;
			 free(current);
			 return(1);
		 }

		 current = current->next;
		 count++;
	 }

	 return(-1);
}
