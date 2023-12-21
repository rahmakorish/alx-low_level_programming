#include "hash_tables.h"
/**
 *key_index-a function that gives you the index of a key.
 *@key:the key
 *@size: the size of hash table
 *Return:index at which the key/value pair in the array of the hash table
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
