#include "hash_tables.h"
/**
 *hash_table_delete- a function that deletes a hash table.
 *@ht:the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *next;

	if (ht == NULL)
	free(ht);
	else if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				tmp = ht->array[i];
				while (tmp != NULL)
				{
					next = tmp->next;
					free(tmp->value);
					free(tmp->key);
					free(tmp);
					tmp = next;
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
