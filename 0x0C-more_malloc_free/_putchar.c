#include "main.h"
#include <unistd.h>

/**
 * _putchar - wr i te s the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
