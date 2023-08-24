#include "main.h"

/**
 * *_strcat - Entry point
 * Description: program that prints two strings
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[j] = '\0';
		return (dest);
}
