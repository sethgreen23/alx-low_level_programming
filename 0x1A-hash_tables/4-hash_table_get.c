#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int bucketIndex = 0;

	if (ht == NULL || ht->size == 0 || ht->array == NULL ||
	    strlen(key) == 0 || key == NULL)
		return (NULL);
	bucketIndex = key_index(key, ht->size);
	tmp = ht->array[bucketIndex];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
