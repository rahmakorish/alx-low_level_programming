#include "hash_tables.h"
/**
 *shash_table_create- a function that creates a hash table.
 *@size:size of hash table
 *Return:pointer to newly created hash table
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new = malloc(sizeof(shash_table_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->size = size;
		new->array = malloc(sizeof(shash_node_t *) * size);
		if (new->array == NULL)
		{
			free(new->array);
			free(new);
			return (NULL);
		}
		for (i = 0; i < new->size; i++)
			new->array[i] = NULL;
		new->shead = NULL;
		new->stail = NULL;
	}
	return (new);
}
/**
 *shash_table_set-a function that adds an element to the hash table.
 *@ht:the hash table you want to add or update the key/value to
 *@key:the key
 *@value:the value associated with the key
 *Return:1 if it succeeded, 0 otherwise
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = malloc(sizeof(shash_node_t *));

	if (new_node == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index < ht->size)
	{
		if (ht->array[index] == NULL)
		{
			(ht->array[index]) = new_node;
			new_node->next = NULL;
			new_node->sprev = NULL;
			new_node->snext = NULL;
		}
		else
		{
			new_node->next = ht->array[index];
			(ht->array[index]) = new_node;
		}
	}
	return (1);
}
