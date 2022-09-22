#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncp(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
			dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
