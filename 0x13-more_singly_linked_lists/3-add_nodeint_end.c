#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of sll
 * @head: head of the sll
 * @n: data to be added
 *
 * Return: returns address of new element or NULL if fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
