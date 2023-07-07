#include "hash_tables.h"
/**
 * key_index - Get the index at which a key/value pair should
 * be stored in array of a hash table.
 * @key: The key to get the index of
 * @size: Size of array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
