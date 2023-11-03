#include "hash_tables.h"

/**
 * hash_table_create - Func that creates a hash table.
 * @size: Pointer:size of the hash table
 *
 * Return: Pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);
	hash_table = calloc(1, sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
