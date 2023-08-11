#include <stdio.h>
/**
 * main - Entry point
 * Description: programe that prints all alpahbet exept q/e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
