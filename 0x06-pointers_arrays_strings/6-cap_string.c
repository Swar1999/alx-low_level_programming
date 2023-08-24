#include "main.h"

/**
 * cap_string - Entry point
 * Description: program that captlized all words in a string
 * @n: pointer
 * Return: Always 0 (Success)
 */
char *cap_string(char *n)
{
	int i = 0;
		while (n[i])
		{
			while (!(n[i] >= 'a' && n[i] <= 'z'))
				i++;
			if (n[i - 1] == ' ' ||
					n[i - 1] == '\t' ||
					n[i - 1] == '\n' ||
					n[i - 1] == ',' ||
					n[i - 1] == ';' ||
					n[i - 1] == '.' ||
					n[i - 1] == '!' ||
					n[i - 1] == '?' ||
					n[i - 1] == '"' ||
					n[i - 1] == '(' ||
					n[i - 1] == ')' ||
					n[i - 1] == '{' ||
					n[i - 1] == '}' ||
					i == 0)
				n[i] -= 32;
			i++;
		}
		return (n);
}


