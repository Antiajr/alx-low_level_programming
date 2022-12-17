#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int a, b = 0;
	char num[] = "01234567891011121314";

	while (b < 10)
	{
		for (a = 0; a <= 19; a++)
		{
			_putchar(num[a]);
		}

		_putchar(10);
		b++;
	}
}

