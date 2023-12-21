#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int j = 0;
	char *s = "";
	hash_node_t *okwethutyana;

	if (!ht)
		return;
	printf("{");
	while (j < ht->size)
	{
		okwethutyana = ht->array[j];
		while (okwethutyana != NULL)
		{
			printf("%s", s);
			printf("'%s': '%s'", okwethutyana->key, okwethutyana->value);
			okwethutyana = okwethutyana->next;
			s = ", ";
		}
		j++;
	}
	printf("}\n");
}
