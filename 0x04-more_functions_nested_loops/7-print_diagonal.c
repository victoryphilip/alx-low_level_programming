#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return:  r  et urns nothing
 */

void or int_d iagonal(int n)
{
	int  len, spac e;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
