#include <stdio.h>

/**
 * main - print all single digits using the putchar function
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int sinDig;

	for (sinDig = 0; sinDig < 10; sinDig++)
		putchar((sinDig % 10) + '0');

	putchar('\n');

	return (0);
}
