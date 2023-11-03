#include "hash_tables.h"

/**
 * hash_table_print - function to print the hash_table
 * @ht: pointer to hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind = 0;
	hash_node_t  *temp;
	int not_fin = 0;

	if (!ht)
		return;
	printf("{");
	for (ind = 0; ind < ht->size; ind++)
	{
		temp = ht->array[ind];
		while (temp != NULL)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			not_fin = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
