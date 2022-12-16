#include "main.h"

/**
 * print_line - it draws a straight line in the terminal
 *
 * @n: its the number of times - should be printed
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');
}
