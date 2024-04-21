#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	else
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
	}
}
