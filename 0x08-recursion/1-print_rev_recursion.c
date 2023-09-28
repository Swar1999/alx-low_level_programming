#include "main.h"
/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')/*end of string*/
	{
		_print_rev_recursion(s + 1);/*move to the next char*/
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
