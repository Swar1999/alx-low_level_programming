#include "main.h"

/**
 * infinite_add - Entry point
 * Description: program that adds two numbers
 * @n1 :pointer
 * @n2 :pointer
 * @r : pointer
 * @size_r :paramter
 * Return: Always 0 (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int overflow = 0;
	int digit = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;
		while (*(n1 + i) != '\0')
			i++;
		while (*(n2 + j) != '\0')
			j++;
		i--;
		j--;
		if (j >= size_r || i >= size_r)
			return (0);
		while (j >= 0 || i >= 0 || overflow == 1)
		{
			if (i < 0)
				val1 = 0;
			else
				val1 = *(n1 + j) - '0';
			temp_sum = val1 + val2 + overflow;
			if (temp_sum >= 10)
				overflow = 1;
			else
				overflow = 0;
			if (digit >= (size_r - 1))
				return (0);
			*(r + digit) = (temp_sum % 10) + '0';
			digit++;
			j--;
			i--;
		}
		if (digit == size_r)
			return (0);
		*(r + digit) = '\0';
		rev_string(r);
		return (r);
}
