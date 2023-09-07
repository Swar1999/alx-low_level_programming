#include "main.h"
#include <stdlib.h>
/**
 * _memset - Entry point
 * Description: program that fills memory with a constsnt byte
 * @s : area
 * @b : char to copy
 * @n : number of time
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		return (s);
}
/**
 * _calloc - Entry point
 * Description: program that allocates memory for an array, using malloc
 * @nmemb: array elements number
 * @size : size of array
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
		if (nmemb == 0 || size == 0)
			return (NULL);
		ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
		_memset(ptr, 0, nmemb * size);
		return (ptr);
}



