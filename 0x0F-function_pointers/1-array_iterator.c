#include "function_pointers.h"
/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ...
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
	{
		action(*array++);
	}
}
