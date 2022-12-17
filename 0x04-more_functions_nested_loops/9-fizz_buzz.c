#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz test for 1 - 100
 *
 * Return: 0 if successfull
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" FIZZ");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" BUZZ");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FIZZBUZZ");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
