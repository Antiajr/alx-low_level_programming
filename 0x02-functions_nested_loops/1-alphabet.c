#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char ch;
	
	ch = 'a';

	while (ch <= 'z')
	{
		-putchar(ch);
		c++;
	}

	_putchar('\n');
}
