#include <stdio.h>

/**
 * main -  prints the alphabet
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char c;


	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
