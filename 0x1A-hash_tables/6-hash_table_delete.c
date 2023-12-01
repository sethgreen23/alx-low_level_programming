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
		if (ht->array[i] == NULL)
			continue;
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			tmp->next = NULL;
			tmp->value[0] = '\0', free(tmp->value);
			tmp->key[0] = '\0', free(tmp->key);
			free(tmp);
		}
	}
	free(ht);
}
