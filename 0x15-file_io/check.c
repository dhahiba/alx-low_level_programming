#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - ...
 * @e_ident: ...
 * Return: ...
 * Description: ...
 */
void check_elf(unsigned char *e_ident)
{
int i;

for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' &&
e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
