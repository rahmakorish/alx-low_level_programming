#include "hash_tables.h"
/**
 *hash_table_create- a function that creates a hash table.
 *@size:size of hash table
 *Return:pointer to newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{	
		free(new);
		return (NULL);
	}	
	else
	{
		new->size = size;
	}
	return (new);
	free(new);
}
