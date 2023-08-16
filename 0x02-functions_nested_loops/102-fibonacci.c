#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int next;
	int i;
		printf("%d, %d,", n1, n2);
		for (i = 0 ; i < 50; i++)
		{
			next = n1 + n2;
			printf("%d,", next);
			n1 = n2;
			n2 = next;
		}
		return (0);
}
