#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key added
 * @value: value
 * Return: 1 (success), 0 (unsuccessful)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
    hash_node_t *nuwe, *tmpp;

	if (!key || !key[0] || !ht || value == NULL || ht->array == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmpp = ht->array[index];
	if (tmpp != NULL)
	{
		while (tmpp)
		{
			if (strcmp(tmpp->key, key) == 0)
			{
				free(tmpp->value);
				tmpp->value = strdup(value);
				return (1);
			}
			tmpp = tmpp->next;
		}
	}
	nuwe = malloc(sizeof(hash_node_t));
	if (nuwe == NULL)
		return (0);
	nuwe->key = strdup(key);
	nuwe->value = strdup(value);
	if (ht->array[index] != NULL)
		nuwe->next = ht->array[index];
	else
		nuwe->next = NULL;
	ht->array[index] = nuwe;
	return (1);
}
