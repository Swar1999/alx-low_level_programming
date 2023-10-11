#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that gives element to each array
 * @array: arry of elements
 * @size : size of array
 * @action: pointer to function
 * Return: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;/*for iterating elements*/
		if (array == NULL || action == NULL)
			/*array dose not exist*/
			return;
		for (i = 0; i < size; i++)
			action(array[i]);/*access each element*/
}
