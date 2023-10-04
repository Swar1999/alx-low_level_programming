#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - function that creates an array
 * @size : array size
 * @c : character to initilize the array
 * Return: pointer or null if failed
 */
char *create_array(unsigned int size, char c)
{
	char *ptr; /*array pointer*/
	unsigned int i;/*ittretion*/
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL || size == 0)/*check the array exist*/
			return (NULL);
		for (i = 0; i < size; i++)
			ptr[i] = c;/*inilize the array*/
		return (ptr);
}
