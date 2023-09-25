#include <stdio.h>
/**
 * main - entry point
 * Description : program prints all argumrnts
 * @argc : argument count
 * @argv : arguments values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
		for (i = 0; i < argc; i++)/*go through all elements*/
		printf("%s\n", argv[i]);/*print each one*/
		return (0);
}
