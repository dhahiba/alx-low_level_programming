#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: input
 * @argv: input
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int x, s = 0;
	char *y;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	y = argv[i];
	for (x = 0; x < strlen(y); x++)
	{
	if (y[x] < 48 || y[x] > 57)
	{
	printf("error\n");
	return (1);
	}
	}
	s += atoi(y);
	y++;
	}
	printf("%d\n", s);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
