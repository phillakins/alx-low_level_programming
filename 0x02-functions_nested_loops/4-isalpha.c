#include "main.h"
/**
 * _isalpha - Shows 1 for lowercaseand uppercase character else show 0
 *
 * @c: char type letter
 *
 * Return: 1 for lowercase or uppercase character. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

