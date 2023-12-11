#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: program that search a string for any set of byts
 * @s :pointer
 * @accept : pointer
 * Return: byts in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
		return ('\0');
}
