#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * print_dlistint - takes a pointer to the head of the doubly linked list
 * @h: returns the number of nodes in the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return(count);
}
