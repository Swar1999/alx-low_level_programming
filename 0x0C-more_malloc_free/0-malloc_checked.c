#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * Description: program that allocates memory using malloc
 * @b : integer
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
		ptr = malloc(b);
		if (ptr == NULL)
			exit(98);
		return (ptr);
}
