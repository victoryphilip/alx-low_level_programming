#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
