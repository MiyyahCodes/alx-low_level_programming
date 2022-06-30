#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: created hash table
 * @key: key value
 * @value: value to be added
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int i;

	if (ht == NULL)
	{
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = realloc(ht->array[i]->value, strlen(value) + 1);
		strcpy(ht->array[i]->value, value);
		return (1);
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		return (0);
	}
	item->key = calloc(strlen(key) + 1, 1);
	item->value = calloc(strlen(value) + 1, 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	if (ht->array[i] != NULL)
	{
		item->next = ht->array[i];
	}
	ht->array[i] = item;

	return (1);
}
