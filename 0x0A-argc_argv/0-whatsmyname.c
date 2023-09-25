#include <stdio.h>
/**
 * main - entry point
 * Description : program that prints its name
 * @argc : arguments counter
 * @argv :arguments vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc; /*ignore argc paramter in this program*/
	printf("%s\n", argv[0]); /*[0] gives the program name*/
	return (0);
}
