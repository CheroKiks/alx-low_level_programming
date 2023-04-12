#include "main.h"
/**
* _strdup - returns a pointer to  newly allocated
*space in memory, that has a copy of the
*string as a parameter.
*@str: string to be copied
*
*Return: NULL if error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
	char *copy;
	int i;
	int lenght;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		lenght++;
	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[lenght] = '\0';

	return (copy);
}
