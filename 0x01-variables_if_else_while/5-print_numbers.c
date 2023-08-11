#include <stdio.h>
/**
 * main - Entry point
 * Description: programe print all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
