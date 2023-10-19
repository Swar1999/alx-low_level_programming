#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that copy a string
 * @str: string
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	char *str2;
	int i, j = 0;
		if (str == NULL)/*string not exist*/
			return (NULL);
		i = 0;
		while (str[i] != '\0')/*reach the end of string*/
			i++;/*read the hoal string*/
		str2 = malloc(sizeof(char) * (i + 1));
		if (str2 == NULL)/*malloc faild*/
			return (NULL);
		for (j = 0; str[j] != '\0'; j++)
			str2[j] = str[j];
		return (str2);
}
