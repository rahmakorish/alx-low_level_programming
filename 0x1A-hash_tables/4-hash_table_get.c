#include "hash_tables.h"
/**
 *hash_table_get-a function that retrieves a value associated with a key.
 *@ht:hash table to look into
 *@key:the key you are looking for
 *Return:the value associated with the element, or NULL if not found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (index <= ht->size)
	{
		if (ht->array[index] != NULL)
			return (ht->array[index]->value);
		else
			return (NULL);
	}
	else
	return (NULL);
}
