#include "main.h"

/**
 * _sqrt - fxn that returns the natural square root of a number.
 * @x: set number
 * @r: the root
 * Return: square root or -1
 */

int _sqrt(int x, int r);

/**
 * _sqrt_recursion - function definition
 * @n: the number
 * Return: square root of -1
 */

int _sqrt_recursion(int n);

/**
 * _sqrt - function definition
 * @x: the number whose square root we are finding
 * @r: the root that will be tested
 * Description: if my number has natural square root
 * Return: the square root or -1
 */

int _sqrt(int x, int r)
{
	if ((r * r) == x)
	{
		return (r);
	}
	else if (r == x / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(x, r + 1));
	}
}

/**
 * _sqrt_recursion - function definition
 * @n: the number to return square
 * Description: if n has natural square return it else
 * return -1
 * Return: the square root of -1
 */

int _sqrt_recursion(int n)
{
	int the_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, the_root));
	}
}
