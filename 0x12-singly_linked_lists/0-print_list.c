#include "lists.h"

/**
 * print_list - prints the all the nodes of a singly linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(ptr->str), ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
