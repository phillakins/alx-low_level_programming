#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a < 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
