#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: number to be used as content
 *
 *
 *Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	tmp = *head;

	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;

		 return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	new->next = NULL;
	new->n = n;
	tmp->next = new;

	return (new);
}
