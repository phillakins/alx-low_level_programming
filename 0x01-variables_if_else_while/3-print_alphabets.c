#include <stdio.h>

/**
 *  main - Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 54; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
