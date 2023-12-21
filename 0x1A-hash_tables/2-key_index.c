#include "hash_tables.h"

/**
* key_index - gives the index of the key
* @key: hash table key
* @size: array size
* Return: key index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int khangela_index;

	khangela_index = hash_djb2(key);
	return (khangela_index % size);
}
