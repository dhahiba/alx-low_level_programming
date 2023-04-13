#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - ...
 * @b: ...
 * Return: ...
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
