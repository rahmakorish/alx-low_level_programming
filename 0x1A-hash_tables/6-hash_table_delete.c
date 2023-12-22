#include "hash_tables.h"
/**
 *hash_table_delete- a function that deletes a hash table.
 *@ht:the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	long unsigned int i;
	/*hash_node_t *tmp;*/

	if (ht == NULL)
	free (ht);
	else if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				/*tmp = ht->array[i];
				ht->array[i] = NULL;*/
				free(ht->array[i]);
			}
		}
	}
	free(ht->array);
	free(ht);
}
