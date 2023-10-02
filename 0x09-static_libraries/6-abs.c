#include "main.h"
/**
 * _abs - Entry point
 * Description: program that calculate the absalut value
 * @i : integer
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
		i = (-1) * i;
	return (i);
}
