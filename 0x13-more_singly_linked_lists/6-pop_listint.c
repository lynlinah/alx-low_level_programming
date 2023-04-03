#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the data value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
