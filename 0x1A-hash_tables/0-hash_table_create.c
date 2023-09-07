#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t **ptr;

	ptr = (hash_table_t **)malloc(size * (hash_table_t *));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
