#include "hash_tables.h"

/**
 * hash_table_set - adds elements to a hash table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (0);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = NULL;

	if (ht->array[index] != NULL)
		ptr->next = ht->array[index];

	ht->array[index] = ptr;
	return (1);
}
