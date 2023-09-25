#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description : program that prints number of elements
 * @argc : argument counter
 * @argv : arguments vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv; /*ignore argv paramter in this program*/
	printf("%d\n", argc - 1);
	return (0);
}
