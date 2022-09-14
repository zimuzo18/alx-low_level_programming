#include "main.h"

/**
 * _islower - indicates lower case
 *
 * @c: the it to be used for this function
 * Return: 0
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
