#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, ls1, ls2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	s = malloc(ls1 + n + 1);
	if (s == 0)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
