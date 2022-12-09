#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *
 *main - main function to generate a random number
 *
 *  
 *
 *Return: 0 if succesfull
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, n % 10);
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);
	
	return (0);
}
