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
	dlistint_t *first;

	first = malloc(sizeof(dlistint_t));

	if (first == NULL)
		return (NULL);

	first->n = n;
	first->prev = NULL;
	first->next = *head;

	if (*head)
		(*head)->prev = first;
	*head = first;

	return (*head);
}
