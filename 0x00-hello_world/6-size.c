#include <stdio.h>


/**
 * main - print the size of various types
 *
 * Description: using the man function
 * this program prints the size of of various types on computers
 * retunr:0
 * */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf ("size of a char: %ld byte(s)\n", sizeof(c));
	printf ("size of an int: %ld bytes(s)\n", sizeof(i));
	printf ("size of a long: %ld byte(s)\n", sizeof(li));
	printf ("size of a long long: %ld byte(s)\n", sizeof(lli));
	printf ("size of a float: %ld bytes(s)\n", sizeof(f));
	return(0);
}
