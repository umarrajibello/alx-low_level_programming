#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of sll
 * @head: the current head of the list
 * @n: the number in the node
 *
 * Return: returns the current head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
