#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that check memory using malloc
 * @b: paramter
 * Return:pointer of allocaled memory
 */
void *malloc_checked(unsigned int b)
{
	int *meme;
		meme = malloc(sizeof(b));
		if (meme == NULL)/*malloc failed*/
			exit(98);
		return (meme);
}
