#include "main.h"
#include <stdio.h>
/**
 * _putchar - Entry point
 * Description : write char in stdiot
 * @c : char
 * Return: on success 1.
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
