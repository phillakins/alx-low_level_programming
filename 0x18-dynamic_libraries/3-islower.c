#include "main.h"

/**
 * _islower - Shows 1 for lowercase character else show 0
 *
 * @c: char type letter
 *
 * Return: 1 for lowercase character. 0 for the rest.
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
	_putchar('\n');
}
