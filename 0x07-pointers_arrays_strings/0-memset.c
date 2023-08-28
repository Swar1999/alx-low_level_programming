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
		b = 'b';
		s = &b;
		for (i = 0; i <= n; i++)
		{
			_putchar(*s);
		}
		_putchar('\n');
		return (s);
}

