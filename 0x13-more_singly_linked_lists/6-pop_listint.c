#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the data value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head);
{
	listint_t *popped;
	int content;
	if (*head == NULL)
		return (0);
	
	popped = *head;
	content = popped->n;
	free(popped);
	
	*head = (*head)->next;
	return (content);
}
