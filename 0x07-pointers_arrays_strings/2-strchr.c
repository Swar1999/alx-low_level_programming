#include "main.h"

/**
 * _strchr - Entry point
 * Description: program that locate charaters in a string
 * @s : string
 * @c : character
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;
		for (; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
				return (&s[i]);
		}
		return (0);
}
