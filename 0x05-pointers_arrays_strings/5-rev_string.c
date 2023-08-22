#include "main.h"

/**
 * rev_string - Entry point
 * Description: program that prints string in revres
 * @s: pointer
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int n = 0;
	int i;
		while (s[n] != '\0')
			n++;
		for (i = 0; i < n; i++)
		{
			n--;
			rev = s[i];
			s[i] = s[n];
			s[n] = rev;
		}
}
