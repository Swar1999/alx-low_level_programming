#include "main.h"
/**
 * _puts - Entry point
 * Description: program that prints length of string
 * @str :pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
