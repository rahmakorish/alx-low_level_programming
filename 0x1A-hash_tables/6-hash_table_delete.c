#include "hash_tables.h"
/**
 *hash_table_delete- a function that deletes a hash table.
 *@ht:the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	free (ht);
}
