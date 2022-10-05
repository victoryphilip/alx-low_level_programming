#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if  (str  ==  NULL)
		return  (NULL);

	for (index = 0; str[index]; index++)
	len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	return   (NULL);
	for (index = 0; str[index]; index++)
{
	cpy[index] = str[index};
}

cpy[len] = '\0';
return (cpy);
}
