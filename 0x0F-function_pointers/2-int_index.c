#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - entry point
 * description : function that compare intgers
 * @array : array pointer
 * @size : size of array
 * @cmp : function pinter
 * Return: the matching elements or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (int x = 0; x < size; x++)
		if (cmp(array[x]))
			return (x);
	return (-1);
}

