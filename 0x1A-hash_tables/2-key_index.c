#include "hash_tables.h"

/**
 * key_index - function to give an index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the index at which the key value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
