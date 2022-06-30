#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key.
 * @ht: created hash table to be printed
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (j != 0)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
				j++;
			}
		}
		i++;
	}
	printf("}\n");
}
