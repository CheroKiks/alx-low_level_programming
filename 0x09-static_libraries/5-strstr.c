#include "main.h"

/**
 * _strstr - fxn that locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be found.
 *
 * Return: If substring is found - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not found - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		count = 0;

		if (haystack[count] == needle[count])
		{
			do {
				if (needle[count + 1] == '\0')
					return (haystack);

				count++;

			} while (haystack[count] == needle[count]);
		}

		haystack++;
	}

	return ('\0');
}

