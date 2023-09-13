#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
		ptr->array[i] = NULL;

	return (ptr);
}
