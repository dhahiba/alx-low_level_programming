#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - ...
 * @s: ...
 * @b: ...
 * @n: ...
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
/**
 * *_calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
