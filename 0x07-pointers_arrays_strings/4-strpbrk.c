#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

while (*s)
{
for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
		return (s);
	}
	s++;
}
return ('\0');
}
