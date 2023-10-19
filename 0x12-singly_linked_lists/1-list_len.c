#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that give the number of elements
 * @h: struct argument
 * Return: total number
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;/*to count elements*/
		while (h)
		{
			count++;/*add element*/
			h = h->next;/*move to next element*/
		}
		return (count);
}
