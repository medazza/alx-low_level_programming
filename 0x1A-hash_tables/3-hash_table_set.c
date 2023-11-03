#include "hash_tables.h"

/**
 * hash_table_set - function that sets a key to value in hash table.
 * @ht: pointer to hash table to add elem to.
 * @key: key for the Data
 * @value: value to Store
 *
 * Return: 1 if it succeeded, 0 if failled
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[ind];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[ind];
	ht->array[ind] = new_node;
	return (1);
}
