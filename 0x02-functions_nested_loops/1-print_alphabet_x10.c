#include "holberton.h"
/**
* print_alphabet - function to print abc
*
* Return: Alwaysn 0 (success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
