#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that implement djb2 algorithm.
 * @str: Key to aplied the transformation.
 *
 * Return: Integer after the operations.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
