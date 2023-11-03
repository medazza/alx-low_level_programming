#include "hash_tables.h"

/**
 * sorted_list - Fun for insert new node in sorted
 * @ht: pointer for sorted hash table
 * @new_node: New node to insert in hash
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbucket->key) < 0)
		{
			new_node->snext = sbucket;
			new_node->sprev = sbucket->sprev;

			if (!sbucket->sprev)
				ht->shead = new_node;
			else
				sbucket->sprev->snext = new_node;
			sbucket->sprev = new_node;
			return;
		}
		sbucket = sbucket->snext;
	} while (sbucket);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - Func creates a sorted hash tables
 * @size: size of the hash table shash
 *
 * Return: pointer to hash table shash
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * shash_table_set - func that adds an elem to the sorted hash table
 * @ht: pointer for sorted hash table
 * @key: key to add the ele to hash table
 * @value: value to add the element to hash
 *
 * Return: 1 if it succeeded, 0 if failled
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *valuecopy, *keycopy;
	shash_node_t  *temp, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ind];

	while (temp != NULL)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = valuecopy;
			return (1);
		}
		temp = temp->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - Func that return value associeted with key
 * @ht: pointer to hash table shash
 * @key: key to retrive value from hash table
 *
 * Return: value of the key or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	shash_node_t  *temp;

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

/**
 * shash_table_print - Func to print the key:value from hash_table
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int not_fin = 0;

	if (!ht)
		return;
	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		not_fin = 1;
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Func that print the key:value from ht in reverse
 * @ht: pointer to the hash table 
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int not_fin = 0;

	if (!ht)
		return;
	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		not_fin = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - Func that free hash table and all nodes
 * @ht: pointer to hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *aux_free;
	unsigned long int ind = 0;

	if (!ht)
		return;

	for (ind = 0; ind < ht->size; ind++)
	{
		temp = ht->array[ind];
		while (temp)
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
