#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: hashed srting
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int s;

	while ((s = *str++))
		hash = ((hash << 5) + hash) + s;

	return (hash);
}
