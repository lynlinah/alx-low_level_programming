#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s 
{
	int n;
	struct listint_s *next;
}
	listint_t;

/**
 * print_listint_safe - Prints a linked list, even if it contains a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;
	
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;
	slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		break;
	}
	}
	
	return (count);
}
