#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of a dlistint_t list.
 * @head: double pointer to doubly linked list.
 * @n: member to be added to new node.
 *
 * Return: address of new element on Success, NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tail;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
	}

	return (new);
}
