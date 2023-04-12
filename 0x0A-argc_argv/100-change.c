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
	int c, x = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		x++;
		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
		if ((c - 5) >= 0)
		{
			c -= 5;
			continue;
		}
		if ((c - 2) >= 0)
		{
			c -= 2;
			continue;
		}
		c--;
	}
	printf("%d\n", x);
	return (0);
}
