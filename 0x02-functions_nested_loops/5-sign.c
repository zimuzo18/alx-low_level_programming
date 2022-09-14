#include "main.h"

/**
 * print_sign - shows if number is postive or negative
 *
 * @n: int to be used for this function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
