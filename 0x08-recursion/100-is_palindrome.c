#include "main.h"
int strlength(char *s);
int strpal(char *s, int i, int len);
/**
 * is_palindrome - function that check for string if palindrom
 * @s: string to be checked
 * Return: 1 if sucess and 0 if failed
 */
int is_palindrome(char *s)
{
	if (*s == 0)/*there is no string*/
		return (1);/*failed to check*/
	return (strpal(s, 0, strlength(s)));
}
/**
 * strlength - function that checks the string length
 * @s: string to be checked
 * Return: 1 if success and 0 if failed
 */
int strlength(char *s)
{
	if (*s == '\0')/*reached the string end*/
		return (0);/*stop recursion*/
	return (1 + strlength(s + 1));/*move to next string*/
}
/**
 * strpal - function check pailndrom of strings
 * @s: string to be checked
 * @i: counter
 * @len: length of string
 * Return: 1 if success and 0 if failed
 */
int strpal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))/*check each letter in string*/
		return (0);
	if (i >= len)/*string to check*/
		return (1);
	return (strpal(s, i + 1, len - 1));
}
