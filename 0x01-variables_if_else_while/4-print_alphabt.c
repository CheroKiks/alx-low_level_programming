#include <stdio.h>
/**
 * main - Prints alphabet without q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

