#include "main.h"
int _prime(int n, int x);
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input
 * Return: integer
 */
int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
/**
 * _prime - tests
 * @n: input
 * @x: input
 * Return: integer
 */
int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n == 1)
		return (0);
	if ((n % x) == 0 || (n <= 1))
		return (0);
	return (_prime(n, x - 1));
}
