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

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);
		count++;
		h = h->next;
	}
	return (count);
}
