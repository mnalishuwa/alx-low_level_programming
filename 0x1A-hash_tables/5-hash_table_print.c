#include "hash_tables.h"

/**
 * hash_table_print - prints all elements of a hash table
 * Description: print all node data in hash table ADT
 *
 * @ht: pointer to hash table ADT
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, printed = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (printed)
				printf(", ");
			print_list(ht->array[idx]);
			printed = 1;
		}
	}
	printf("}\n");
}

/**
 * print_list - prints all elements of list_t
 * Description: receives a pointer to head node and prints list elements
 * one at a time
 *
 * @h: pointer to head node of type hash_node_t
 *
 * Return: size_t, number of elements in the list
 */

size_t print_list(const hash_node_t *h)
{
	size_t elements = 0, first = 1;
	const hash_node_t *current_node = h;

	while (current_node)
	{
		elements++;
		if (first)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->next;
		first = 0;
	}
	return (elements);
}
