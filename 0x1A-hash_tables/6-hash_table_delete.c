#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: created hash table to be deleted.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_table_t *cp;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht == NULL)
		return;
	cp = ht;
	while (i < ht->size)
	{
		if (cp->array[i] != NULL)
		{
			node = cp->array[i];
			while (node)
			{
				temp = node;
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		i++;
	}
	free(cp->array);
	free(cp);
}
