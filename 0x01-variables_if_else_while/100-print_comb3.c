#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int var;

	for (var = 0; var < 9; var++)
	{
		int ii;

		for (ii = var + 1; ii < 10; ii++)
		{
			putchar((var % 10) + '0');
			putchar((ii % 10) + '0');

			if (var != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}

	}
	putchar('\n');
	return (0);
}
