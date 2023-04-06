#include "main.h"
int comp(char *s, int x, int y);
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input
 * Return: integer
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
/**
 * comp - compares two chaaracters
 * @s: input
 * @x: input
 * @y: input
 * Return: integer
 */
int comp(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y - 1)
			return (1);
		return (comp(s, x + 1, y - 1));
	}
	return (0);
}
