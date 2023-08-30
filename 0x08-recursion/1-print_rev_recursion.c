#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * Description: program that prints string in revers
 * @s: pointer
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
