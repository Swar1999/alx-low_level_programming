#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that convert string into int
 * @s : paramter
 * Return: new value
 */
int _atoi(char *s)
{
	int i, j, k, len, h, digit;
		i = 0;
		j = 0;
		k = 0;
		len = 0;
		h = 0;
		digit = 0;
		while (s[len] != '\0')/*there is a string*/
			len++;/*read hole string*/
		while (i < len && h == 0)
		{
			if (s[i] == '-')
				++j;
			if (s[i] >= '0' && s[i] <= '9')/*check ascii tables*/
			{
				digit = s[i] - '0';
				if (j % 2)
					digit = -digit;
				k = k * 10 + digit;
				h = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
					break;
				h = 0;
			}
			i++;
		}
		if (h == 0)
			return (0);
		return (k);
}
/**
 * main - entry point
 * Description : program that multiply two numbers
 * @argc : argument counter
 * @argv : argument vector
 * Return: multipling value
 */
int main(int argc, char *argv[])
{
	int x, y, mul;
		if (argc > 3 || argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		x = _atoi(argv[1]);/*convert string into int*/
		y = _atoi(argv[2]);/*convert string into int*/
		mul = x * y;
		return (mul);
}
