#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
