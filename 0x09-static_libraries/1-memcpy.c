#include "main.h"
/**
 * _memcpy - Entry point
 * Description: program that copies memory area
 * @dest: pointer to area 2
 * @src: pointer to area 1
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;
		for (; i < j; i++)
		{
			dest[i] = src[i];
			n--;
		}
		return (dest);
}
