#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @m: unsigned interger
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int m)
{
	void *ptr;

	ptr = malloc(m);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
