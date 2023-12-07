#include "lists.h"
/**
 * dlistint_len - function that return the number of nodes
 * @h: the header of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
		while (h != NULL)
		{
			h = h->next;
			counter++;
		}
		return (counter);
}
