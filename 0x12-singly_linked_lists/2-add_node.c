#include "lists.h"

/**
 * add_node - adds a node at the beginning of sll
 * @head: the current head of the list
 * @str: a str member of the node
 *
 * Return: returns the current head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
