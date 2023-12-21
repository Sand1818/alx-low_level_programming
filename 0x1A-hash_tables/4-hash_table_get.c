#include "hash_tables.h"

/**
* hash_table_get -  retrieves a value associated with a key
* @ht: the hashtable to search in
* @key: the key looking from
* Return: value (success), NULL (unsuccessful)
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *okwethutyana = NULL;
	unsigned long int index = 0;

	if (!key)
		return (NULL);

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		okwethutyana = ht->array[index];
		while (okwethutyana)
		{
			if (strcmp(okwethutyana->key, key) == 0)
				return (okwethutyana->value);
			okwethutyana = okwethutyana->next;
		}
	}
	return (NULL);
}
