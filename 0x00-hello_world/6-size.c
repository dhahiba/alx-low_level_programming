#include <stdio.h>
/**
 *  main - A program that printf the size of various computer types
 *  Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char : %lu byte(s)\n", sizeof(char));
printf("size of a int : %lu byte(s)\n", sizeof(int));
printf("size of a long int : %lu bytes(s)\n", sizeof(long int));
printf("size of a long long int : %lu bytes(s)\n", sizeof(long long int));
printf("size of a float : %lu bytes(s)\n", sizeof(float));
return (0);
}
