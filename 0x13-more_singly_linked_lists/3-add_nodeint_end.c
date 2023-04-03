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
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
