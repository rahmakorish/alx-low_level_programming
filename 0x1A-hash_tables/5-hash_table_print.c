#include "hash_tables.h"
/**
 *hash_table_print- a function that prints a hash table.
 *@ht:the hash table
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, first = 1;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			if (node != NULL)
			{
				if (!first)
					printf(", ");
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				first = 0;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
