#include "main.h"

/**
 * _memset - Entry point
 * Description: program that fills the memory with constant value
 * @s: pointer
 * @b: the constant value
 * @n: counter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;
                for (; n > 0; i++)
                {
                        s[i] = b;
                        n--;
                }

                return (s);
}
