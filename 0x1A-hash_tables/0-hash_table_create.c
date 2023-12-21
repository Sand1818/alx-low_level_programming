#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size: size
 * Return: newly created hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nuwe_hash_table;

	if (size <= 0)
		return (NULL);
	nuwe_hash_table = malloc(sizeof(hash_table_t));
	if (nuwe_hash_table == NULL)
		return (NULL);
	nuwe_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (nuwe_hash_table->array == NULL)
	{
		free(nuwe_hash_table);
		return (NULL);
	}
	nuwe_hash_table->size = size;
	return (nuwe_hash_table);
}
