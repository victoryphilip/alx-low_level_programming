#include "main.h"

/**
 * _strcat - a function that concatenates the strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index++]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
