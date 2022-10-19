#include "main.h"

/**
 * print_sign - Display input number greater, equal or less than zero.
 *
 * @n: chat type  integer.
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
