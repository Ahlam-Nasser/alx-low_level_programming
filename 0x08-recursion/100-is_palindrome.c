#include "main.h"

int check_pal(char *s, int i, int len);
int _strien_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 if true, not 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strien_recursion(s)));
}
/**
 * _strlen_recursion - returns the string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks char for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: length of string
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
