#include "main.h"
/**
 * print_binary - ...
 * @n: ...
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int cr;

	for (i = 63; i >= 0; i--)
	{
		cr = n >> i;
		if (cr & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
