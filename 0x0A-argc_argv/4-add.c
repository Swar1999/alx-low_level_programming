#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Entry point
 * Description: program that prints _putchar
 * @str : string
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;
		count = 0;
		while (count < strlen(str))/* count string*/
		{
			if (isdigit(str[count]))/*check string if there digit*/
			{
				return (0);
			}
			count++;
		}
		return (1);
}

/**
 * main - Entry point
 * Description: program that adds positive numbers
 * @argc : counter
 * @argv : vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int conv;
	int sum = 0;
		count = 1;
		while (count < argc)/* check the whole array*/
		{
			if (check_num(argv[count]))
			{
				conv = atoi(argv[count]);
				sum += conv;
			}
			else
			{
				printf("Error/n");
				return (1);
			}
			count++;
		}
		printf("%d\n", sum);
		return (0);
}
