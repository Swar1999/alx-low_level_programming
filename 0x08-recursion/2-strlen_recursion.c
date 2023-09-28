#include "main.h"
/**
 * _strlen_recursion - function that gives the length
 * of a string
 * @s:string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int counter = 0;
		if (*s != '\0')/*stop condition*/
		{
			counter++;/*add the char*/
			counter = _strlen_recursion(s + 1);/*move to the next one*/
		}
		return (counter);
}
