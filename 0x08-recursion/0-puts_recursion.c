#include "main.h"
/**
 * _puts_recursion - function that prints string
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')/*not the end of string*/
	{
		_putchar(*s);/*print one char*/
		_puts_recursion(s + 1);/*moving to next char*/
	}
	else
	{
		_putchar('\n');
	}
}
