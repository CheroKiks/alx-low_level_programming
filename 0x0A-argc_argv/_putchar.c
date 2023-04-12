#include <stdio.h>
#include "main.h"

/**
 * _putchar - fxn that writes the character c to stdout
 * @c: The character th print
 *
 * Return: 1 on success
 * On error, Return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1. &c, 1));
}
