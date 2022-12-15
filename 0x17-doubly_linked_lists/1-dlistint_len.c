#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a list.
 * @h: node in a doubly linked list
 *
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *head = NULL;

	head = h;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
