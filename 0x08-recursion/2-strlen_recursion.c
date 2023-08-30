#include "main.h"

/**
 * _strlen_recursion - Entry point
 * Description: program that return the length of a string
 * @s: pointer
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i;
		if (*s)
		{
			i++;
			i = _strlen_recursion(s + 1);
		}
		return (i);
}

