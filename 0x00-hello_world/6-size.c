#include <stdio.h>
/**
 *  main - A program that printf the size of various computer types
 *  Return: 0 (Success)
 */
int main(void)
{

printf("size of a char : %d byte(s)\n", sizeof(char));
printf("size of a int : %d byte(s)\n", sizeof(int));
printf("size of a long int : %d bytes(s)\n", sizeof(long int));
printf("size of a long long int : %d bytes(s)\n", sizeof(long long int));
printf("size of a float : %dytes(s)\n", sizeof(float));
return (0);
}
