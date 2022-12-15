#include "lists.h"

/**
 * print_dlistint - prints all elements in a list.
 * @h: list to be printed.
 *
 * Return: Number of nodes present.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *head = NULL;

	h = head;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
