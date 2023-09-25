#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that print linked list elements
 * @h : struct paramter
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;
		while (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			h = h->next;
			counter++;
		}
		return (counter);
}
