#include <stdio.h>

/**
 * main - program that prints either number
 * or file or buzz or fizzbuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
				printf("%d ", 1);
		}
		printf("\n");
		return (0);
}
