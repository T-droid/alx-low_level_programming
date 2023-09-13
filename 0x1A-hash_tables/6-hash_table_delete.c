#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: address of the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *ptr;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			ht->array[i] = NULL;

			while (ptr)
			{
				temp = ptr;
				ptr = ptr->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
