#include "lists.h"

/**
 * add_nodeint_end - adds a node to a list at the end
 * @head: pointer to the list
 * @n: member of the list
 *
 * Return: the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}


	if (temp == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (temp);
}
