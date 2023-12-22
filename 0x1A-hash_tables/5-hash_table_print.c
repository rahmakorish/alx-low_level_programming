#include "hash_tables.h"
/**
 *hash_table_print- a function that prints a hash table.
 *@ht:the hash table
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (index != ht->size)
			printf("'%s': '%s', ", ht->array[index]->key, ht->array[index]->value);
			else if (index == ht->size - 2)
			printf("'%s': '%s'\n}", ht->array[index]->key, ht->array[index]->value);
		}
		else
			continue;
	}
	printf("}\n");
}
