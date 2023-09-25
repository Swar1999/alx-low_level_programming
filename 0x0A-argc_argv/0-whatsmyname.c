#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints its name, followed by a new line
 * @argv : vector
 * @argc : counter
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
