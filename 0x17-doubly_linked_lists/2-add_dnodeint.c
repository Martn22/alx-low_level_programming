#include "lists.h"

/**
 * add_dnodeint - This function adds node at begining of list.
 * @head: node in doubly linked list.
 * @n: member in node.
 *
 * Return: address of new node on success, NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
		*head = new;
	}
	return (new);
	free(new);
}
