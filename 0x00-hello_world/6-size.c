#include <stdio.h>
/**
*main-program that prints the size of various types on the computer
*Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %llu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %llu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %llu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %llu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %llu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
