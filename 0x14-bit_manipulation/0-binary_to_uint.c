#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that turn binary into unsigned int
 * @b: string of 1 and 0
 * Return: int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
		if (b == NULL)
			return (0);
		while (*b)/*go throug the string*/
		{
			if (*b != '0' && *b != '1')
				return (0);
			number = number * 2 + (*b - '0');
			b++;
		}
		return (number);
}
