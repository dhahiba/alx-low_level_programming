#include "main.h"
#include <stdio.h>
/**
 * main - prints the number og args
 * @argc: input
 * @argv: input
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
