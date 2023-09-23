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
	unsigned int i = 0;
		h = malloc(sizeof(list_t));
		if (h == NULL)
		{
			printf("(nil)");
			return (-1);
		}
		while (h != NULL)
		{
			printf("%s", h->str);
			i++;
			h = h->next;
		}
		return (0);
}
