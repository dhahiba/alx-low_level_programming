#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _memset - ...
 * @s: ...
 * @b: ...
 * @n: ...
 * Return: ...
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s++ = b;
	}
	return (p);
}
/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return: ...
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
