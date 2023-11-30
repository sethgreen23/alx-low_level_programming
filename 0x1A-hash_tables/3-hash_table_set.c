#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn = NULL;
	unsigned long int bucketIndex;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);

	hn = malloc(sizeof(struct hash_node_s));
	if (hn == NULL)
		return (0);

	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn), hn = NULL;
		return (0);
	}
	hn->value = strdup(value);
	if (hn->value == NULL)
	{
		free(hn->key), hn->key = NULL;
		free(hn), hn = NULL;
		return (0);
	}
	hn->next = NULL;

	bucketIndex = key_index((const unsigned char *)key, ht->size);
	if (ht->array[bucketIndex] == NULL)
	{
		ht->array[bucketIndex] = hn;
	}
	else
	{
		hn->next = ht->array[bucketIndex];
		ht->array[bucketIndex] = hn;
	}
	return (1);
}
