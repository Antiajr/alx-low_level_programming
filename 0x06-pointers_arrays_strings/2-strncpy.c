#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
