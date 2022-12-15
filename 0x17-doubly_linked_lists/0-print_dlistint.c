#include "lists.h"

/**
 * print_dlistint - prints all elements in a list.
 * @h: list to be printed.
 *
 * Return: Number of nodes present.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *head = NULL;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
