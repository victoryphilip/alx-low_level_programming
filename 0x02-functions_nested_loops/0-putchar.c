#include "unistd.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
