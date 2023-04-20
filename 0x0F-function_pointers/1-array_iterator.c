#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - fxn that iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action fxn to take
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		exit(98);
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
