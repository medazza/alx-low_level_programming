#include "hash_tables.h"

/**
 * key_index - get a index for the   key given
 * @key: key (string) to get index for
 * @size: The size of hash table
 *
 * Return: index for the 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
