#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - Entry point
 * Description: program that returns a pointer to a newly allocated space
 * @str : string
 * Return: str if success and null if fail
 */
char *_strdup(char *str)
{
	char *strn;
	int i;
	int j = 0;
		if (str == NULL)
			return (NULL);
		i = 0;
		while (str[i] != '\0')
			i++;
		strn = malloc(sizeof(char) * (i + 1));
		if (strn == NULL)
			return (NULL);
		for (j = 0; str[j]; j++)
			strn[j] = str[j];
		return (strn);
}

