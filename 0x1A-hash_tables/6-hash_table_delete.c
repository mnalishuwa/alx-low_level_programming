#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * Description: Free's up memory allocated for a
 * hash table ADT
 *
 * @ht: pointer to table ADT
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		free_list(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}

/**
 * free_list - frees memory allocated for linked list
 * Description: takes a pointer to head of a linked list
 * and free's the memory allocated.
 *
 * @head: pointer to head of the linked list
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current_node = head;
	hash_node_t *next_node =  NULL;

	if (!current_node)
	{
		return;
	}
	next_node = current_node->next;

	while (current_node)
	{
		free_hash_node_t(current_node);
		current_node = next_node;
		if (current_node)
			next_node = next_node->next;
	}

}
