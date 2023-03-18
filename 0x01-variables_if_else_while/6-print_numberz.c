#include <stdio.h>

/**
 * main - prints numbers from 0 t0 9
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
