#include "main.h"

/**
 * puts2 - Entry point
 * Description: program that prints string follow by new line
 * @str: pointer
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *s = str;
	int n;
		while (*s != '\0')
		{
			s++;
			len++;
		}
		t = len - 1;
		for (n = 0; n <= t; n++)
		{
			if (n % 2 == 0)
			{
				_putchar(str[n]);
			}
		}
		_putchar('\n');
}
