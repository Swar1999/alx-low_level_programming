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
	list_t *ptr;
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
		{
			printf("(nil)");
			return (-1);
		}
		while (i < ptr->len)
		{
			printf("%s", ptr->str);
			ptr = ptr->next;
			i++;
		}
		free(ptr);
		return (0);
}
