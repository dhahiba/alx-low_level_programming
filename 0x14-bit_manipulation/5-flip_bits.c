#include "main.h"
/**
 * flip_bits - ..
 * @n: ...
 * @m: ...
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int cr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cr = ex >> i;
		if (cr & 1)
			c++;
	}
	return (c);
}
