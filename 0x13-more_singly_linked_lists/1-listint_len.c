#include "lists.h"

/**
 * listint_len - counts the number of nodes of a singly linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
