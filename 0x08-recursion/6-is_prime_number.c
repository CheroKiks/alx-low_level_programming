#include "main.h"

/**
 * divisible - fxn declaration
 * @m: number to test
 * @div: the divisor
 * Return: 0 or 1
 */

int divisible(int m, int div);

/**
 * is_prime_number - fxn definition
 * @n: number to check
 * Return: 0 or 1
 */

int is_prime_number(int n);

/**
 * divisible - fxn definition
 * @m: the number to check
 * @div: the divisor to use
 * Description: tests the divisibility of a number
 * Return: 0 for divisible, 1 for not
 */

int divisible(int m, int div)
{
	if (m % div == 0)
	{
		return (0);
	}
	else if (div == m / 2)
	{
		return (1);
	}
	else
	{
		return (divisible(m, div + 1));
	}
}

/**
 * is_prime_number - fxn definition
 * @n:number to be tested
 * Description: find a prime number
 * Return: 0 for not prime, 1 for prime
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
		return (divisible(n, div));
	}
}
