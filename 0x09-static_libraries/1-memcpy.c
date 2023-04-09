#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copies memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int r = n;

	for (i = 0; i < r; i++)
		dest[i] = src[i];
	return (dest);
}
