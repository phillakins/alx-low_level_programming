#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @r: char type integer.
 *
 * Return: absolute value of an integer
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
	_putchar('\n');
}
