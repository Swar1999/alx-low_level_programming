#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function prints string
 * Description : print all elements of linked list
 * @h : struct contains data and link
 * Return: all elements of list
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0, i;
		h = malloc(sizeof(list_t));
		if (h == NULL)
		{
			printf("(nil)");
			return (-1);
		}
		while (h->next != NULL)
		{
			for (i = 0; i < h->len; i++)
			{
				printf("%s", h->str);
			}
			h = h->next;
			counter++;
		}
		return (0);
}
