#include "main.h"
int _sqrt_n(int n, int x);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_n(n, 1));
}
/**
 * _sqrt_n - calculates sqrt
 * @n: input
 * @x: input
 * Return: integer
 */
int _sqrt_n(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (-1);
	return (_sqrt_n(n, x + 1));
}
