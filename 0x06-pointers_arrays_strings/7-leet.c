#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int index = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
				string[indexq] - 32 == leet[index2])
					str[index1] = index2 + '0';
		}
	}
	return (str);
}
