#include "hash_tables.h"
/**
 *hash_table_create- a function that creates a hash table.
 *@size:size of hash table
 *Return:pointer to newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->size = size;
		new->array = malloc(sizeof(hash_node_t) * new->size);
		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				new->array[i] = NULL;
		}
	}
	return (new);
}
