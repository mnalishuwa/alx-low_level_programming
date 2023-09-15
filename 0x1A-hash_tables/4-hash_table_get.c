#include "hash_tables.h"

/**
 * hash_table_get - searches table ADT for a key if exists
 * Description: takes a pointer to the table ADT and searches
 * table for a particular key, returns the value if key exists
 * or returns NULL otherwise. returns a copy of the value
 * created with strdup, it is the responsibility of the caller
 * to free the string after use.
 *
 * @ht: pointer to the hash table
 * @key: str, key to search for
 *
 * Return: str value if found, else return null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int location;

	if (ht == NULL)
		return (NULL);
	location = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[location];

	if (current_node == NULL)
		return (NULL);

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (strdup(current_node->value));
		current_node = current_node->next;
	}
	return (NULL);
}
