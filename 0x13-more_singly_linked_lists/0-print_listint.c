#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints elements
 * @h:struct paramter
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counter++;
		}
		return (counter);
}