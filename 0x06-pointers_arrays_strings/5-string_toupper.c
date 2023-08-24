#include "main.h"

/**
 * string_toupper - Entry point
 * Description: program that changes all lowercast letters into uppers
 * @n: pointer
 * Return: Always n (Success)
 */

char *string_toupper(char *n)
{
	int i;
		i = 0;
		while (n[i] != '\0')
		{
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] = n[i] - 32;
			i++;
		}
		return (n);
}

