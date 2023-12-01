#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * REturn: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *current = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->value), tmp->value = NULL;
			free(tmp->key), tmp->key = NULL;
			tmp->next = NULL;
			free(tmp);
		}
	}
	free(ht);
}
