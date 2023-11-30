#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 *
 * @size: The size of the hashtable
 *
 * Return: a hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * ht->size);
	if (ht->array == NULL)
	{
		free(ht);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
