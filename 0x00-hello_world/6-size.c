#include <stdio.h>


/**
 *main - print the size of various types
 *
 *Description: using the man function
 *this program prints the size of of various types on computers
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a long: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
