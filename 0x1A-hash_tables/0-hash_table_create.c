#include "hash_tables.h"

/**
 * hash_table_create - creates the hash table ADT
 * Description: Allocates memory and initializes the hash table
 *
 * @size: +ve int, max capacity of ADT
 *
 * Return: hash_table_t pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
