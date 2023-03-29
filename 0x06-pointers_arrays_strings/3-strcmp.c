#include "main.h"
/**
 * _strcmp - Compares pointers to two strings
 * @s1: string
 * @s2: String
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
