#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @a: input string
 * Return: caps on first letter of a seperator
 */
char *cap_string(char *n)
{
	int i, x;
	int cap = 32;
	int seperators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == seperators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
