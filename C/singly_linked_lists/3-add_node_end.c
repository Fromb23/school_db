#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;

	end_node = (list_t *)malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		list_t *temp;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}
	return (end_node);
}
