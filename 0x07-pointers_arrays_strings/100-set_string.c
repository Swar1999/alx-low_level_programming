#include "main.h"

/**
 * set_string - Entry point
 * Description: program that set a pointer to a char
 * @s : pointer to pointer
 * @to : pointer
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}

