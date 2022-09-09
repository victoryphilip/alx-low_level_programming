#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
	{
		putchar((var % 10) + '0');
		if (var >= 0 && var < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');
	return (0);
}
