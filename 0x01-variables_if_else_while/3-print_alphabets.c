#include <stdio.h>

/**
 * main - prints the alphabet in upper and lower case
 *
 * Return: Always 0( success)
 */
int main(void)
{	char cu, cl;

	for (cu = 'a'; cu <= 'z'; cu++)
	{
		putchar(cu);
	}
	for (cl = 'A'; cl <= 'Z'; cl++)
	{
		putchar(cl);
	}
	putchar('\n');
	return (0);
}

