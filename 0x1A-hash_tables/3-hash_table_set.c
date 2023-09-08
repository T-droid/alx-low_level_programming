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

	index = key_index(key,
