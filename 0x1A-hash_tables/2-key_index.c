#include "hash_tables.h"

/**
 * key_index - Key index, gives the index of a key
 * @key: The key, to get index of
 * @size: Size of the hash table
 *
 * Return: Index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
