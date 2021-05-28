#include "hash_tables.h"

/**
 * key_index - gets the index
 * @key: key to be searched
 * @size: size of the hash table
 * Return: index of the hash-table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
