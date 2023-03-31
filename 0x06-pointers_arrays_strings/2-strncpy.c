#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination string pointer
 * @src: source string pointer.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n_bytes;

	for (n_bytes = 0; n_bytes < n && src[n_bytes] != '\0'; n_bytes++)
		dest[n_bytes] = src[n_bytes];

	for (; n_bytes < n; n_bytes++)
		dest[n_bytes] = '\0';

	return (dest);
}
