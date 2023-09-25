#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that print number of elements in list
 * @h : struct paramter
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
		while (h)
		{
			counter++;
			h = h->next;
		}
		return (counter);
}
