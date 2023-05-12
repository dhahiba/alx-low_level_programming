#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_magic - ...
 * @e_ident: ..
 * Description: ...
 */
void print_magic(unsigned char *e_ident)
{
int i;

printf("Magic:");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e_ident[i]);
if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
