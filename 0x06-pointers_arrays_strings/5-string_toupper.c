#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @n: string to be checked
 * 
 * Return: uppercase string
 */

char *string_toupper(char *word)
{
	int length;

	length = 0;

	while (word[length] != '\0')
	{
		if (word[length] >= 97 && word[length] <= 122)
		{
			word[length] = word[length] - 32;
		}

		length++;
	}

	return (word);
}
