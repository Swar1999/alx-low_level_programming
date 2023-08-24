#include "main.h"

/**
 * _strcmp - Entry point
 * Description: program that compare two strings
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
		return (0);
}

