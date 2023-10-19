#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1;
 * @s2: string 2;
 * Return: the new allocated memory containing both strings
 */
char *str_concat(char *s1, char *s2)
{
	size_t n, m, i, j;
	char *ptr;
		if (s1 == NULL)/*frist string is empty*/
			s1 = "";/*add with scond string*/
		if (s2 == NULL)/*second string is empty*/
			s2 = "";/*add with frist string*/
		n = 0;/*length of frist string*/
		while (s1[n] != '\0')
			n++;
		m = 0;/*length of second string*/
		while (s2[m] != '\0')
			m++;
		ptr = malloc(sizeof(char) * (n + m + 1));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < n; i++)
			ptr[i] = s1[i];
		for (j = 0; j <= m; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
		return (ptr);
}
