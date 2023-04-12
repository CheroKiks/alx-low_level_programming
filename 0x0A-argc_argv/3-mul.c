#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints multiplication of two numbers
*@argc: arguments count
*@argv: arguments array
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
