#include "function_pointers.h"
/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
		if (cmp(array[i]))
			return (i);
		i++;
		}
	return (-1);
}
