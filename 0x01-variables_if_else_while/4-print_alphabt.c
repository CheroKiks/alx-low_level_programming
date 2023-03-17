#include <stdio>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != &&i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
