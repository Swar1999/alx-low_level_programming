#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints the number of arguments passed into it
 * @argc : counter
 * @argv : vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*ignor argv*/
	printf("%d\n", argc - 1);
	return (0);
}

