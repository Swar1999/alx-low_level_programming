#include "main.h"

/**
 * print_rev - Entry point
 * Description: program that prints lenght in reves
 * @s :pointer
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int len = 0;
	int n;
		while (*s != '\0')
		{
			len++;
			s++;
		}
		s--;
		for (n = len; n > '\0'; n--)
		{
			_putchar(*s);
			s--;
		}
		_putchar('\n');
}
