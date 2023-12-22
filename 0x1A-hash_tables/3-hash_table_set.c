#include "hash_tables.h"
/**
 *hash_table_set-a function that adds an element to the hash table.
 *@ht:the hash table you want to add or update the key/value to
 *@key:the key
 *@value:the value associated with the key
 *Return:1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (key[0] == '\0')
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (index <= ht->size)
	{
		if (ht->array[index] == NULL)
		{
			(ht->array[index]) = new_node;
		}
		else
		{
			index = 0;
			(ht->array[index]) = new_node;
		}
	}
	return (1);
}