#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int j = 0;
	hash_node_t *matchday_tmp, *okt;

	if (!ht)
		return;
	while (j < ht->size)
	{
		matchday_tmp = ht->array[j];
		while (matchday_tmp != NULL)
		{
			free(matchday_tmp->key);
			free(matchday_tmp->value);
			okt = matchday_tmp->next;
			free(matchday_tmp);
			matchday_tmp = okt;
		}
		j++;
	}
	free(ht->array);
	free(ht);
}
