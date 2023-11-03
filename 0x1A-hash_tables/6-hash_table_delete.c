#include "hash_tables.h"

/**
 * hash_table_delete - func thet delete hash table and all nodes
 * @ht: pointer to hash table to delete.
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *aux_free;
	unsigned long int ind = 0;

	if (!ht)
		return;
	for (ind = 0; ind < ht->size; ind++)
	{
		temp = ht->array[ind];
		while (temp != NULL)
		{
			aux_free = temp;
			temp = temp->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
