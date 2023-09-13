#include "hash_tables.h"

/**
 * hash_table_print - prints contents of hash table
 * @ht: address of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				if (i != 0)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				/*if (i + 1 != ht->size && ptr->next != NULL)
					printf(", ");*/
				ptr = ptr->next;
			}
		}
		i++;
	}
	printf("}\n");
}
