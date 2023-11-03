#include "hash_tables.h"

/**
 * hash_table_get - Func that retrieve value associeted with key
 * @ht: pointer to hash table retrieve value from
 * @key: key to find value
 *
 * Return: value ass with the key or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t  *temp;

	if (!ht || !key || !*key)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ind];
	while (temp)
	{
		if (!strcmp(key, temp->key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
