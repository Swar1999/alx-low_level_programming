#include "main.h"

/**
 * _strncat - Entry point
 * Description: program that prints two strings
 * @dest: pointer
 * @src: pointer
 * @n: counter
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
		i = 0;
		while (dest[i] != '\0')
		{
			i++
		}
		j = 0;
		while (j < n && src[j] != '\n')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest);
}

