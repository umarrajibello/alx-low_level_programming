#include "lists.h"

/**
 * add_node_end - adds node at the end of sll
 * @head: head of the sll
 * @str: str member of the sll
 *
 * Return: returns address of new element or NULL if fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	if ((head == NULL) || (str == NULL))
		return (NULL);

	ptr = *head;
	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
