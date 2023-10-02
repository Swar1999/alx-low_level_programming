#include "main.h"
/**
 * _strncpy - Entry point
 * Description: program that copy sstrings
 * @dest: pointer
 * @src: pointer
 * @n: counter
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
		j = 0;
		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
		return (dest);
}
