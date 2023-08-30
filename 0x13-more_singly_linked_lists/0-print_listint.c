#include "lists.h"

/**
 * print_listint - prints the all the nodes of a singly linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
