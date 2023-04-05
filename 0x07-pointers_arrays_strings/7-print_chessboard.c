#include "main.h"
/**
 * print_chessboard - fxn that prints a chessboard
 * using a nx8 array
 * @a: array of char*
 * Return: void
 **/
void print_chessboard(char (*a)[8])
{
	int count, inner_count, row_length = 8;

	for (count = 0; count < row_length; count++)
	{
		for (inner_count = 0; inner_count < row_length; inner_count++)
		{
			_putchar(a[count][inner_count]);
			if (inner_count == 7)
			{
				_putchar('\n');
			}
		}
	}
}
