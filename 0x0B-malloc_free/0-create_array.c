#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Entry point
 * Description: program that create an array and initilize it with char
 * @size : size of array
 * @c : char to initilaize the array
 * Return: pointer if success or null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
		str = malloc(sizeof(char) * size);
		if (size == 0 || str == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
}

