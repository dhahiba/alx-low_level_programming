#include "main.h"
/**
 * print_diagonal - drows a diagonal line on the terminal
 * @n: number of line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >= 0)
	{
	for (i = 1; i <= n; i++)
	{
	for (j = 2; j <= i; j++)
	_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
	}
	_putchar('\n');
}
