#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: input
 * @argv: input
 * Return: if the number of arguments is not exactly one - 1.
 * otherwise - 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
			l += m / c[i];
			m = m % c[i];
			if (m == 0)
				break;
			}
		}
		printf("%d\n", l);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
