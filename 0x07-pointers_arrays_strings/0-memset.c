#include "main.h"

/**
 * _memset - Entry point
 * Description: program that fills the memory with constant value
 * @s: pointer
 * @b: the constant value
 * @n: counter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
		for (i = 0; i <= n; i++)
		{
			s[i] = b;
			n--;
		}

		return (s);
}

