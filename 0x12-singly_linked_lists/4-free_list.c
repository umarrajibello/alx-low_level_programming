#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the list
 *
 * Return: returns nothing
 */
void free_list(list_t *head)
{
	free(head);
}
