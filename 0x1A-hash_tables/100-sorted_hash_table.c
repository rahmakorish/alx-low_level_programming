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
