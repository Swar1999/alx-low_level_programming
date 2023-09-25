#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
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
