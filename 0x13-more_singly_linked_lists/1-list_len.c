#include "lists.h"

/**
 * list_len - counts the number of nodes of a singly linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			return (count);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
