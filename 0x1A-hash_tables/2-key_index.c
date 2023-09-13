#include "hash_tables.h"

/**
 * key_index - calculates an index for node storage in table ADT
 * Description: Takes a string and uses djb2 algorithm to compute
 * a hash for the string and then return an index for storage
 * in a hash table
 *
 * @key: str to be hashed
 * @size: positive int, hash table capacity
 *
 * Return: positive int, storage location
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
