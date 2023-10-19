#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all elements of linked list
 * @h: struct argument
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;/*to count elements*/
		while (h)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;/* move to next node*/
			count++;
		}
		return (count);/*number of elements*/
}
