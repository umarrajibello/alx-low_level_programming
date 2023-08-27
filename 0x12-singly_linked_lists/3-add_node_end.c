#include "lists.h"

/**
 * add_node_end - adds a node to a list at the end
 * @head: pointer to the list
 * @str: member of the list
 *
 * Return: the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}


	if (temp == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL); /* String duplication failed */
	}

	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (temp);
}
