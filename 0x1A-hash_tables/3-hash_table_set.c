#include "hash_tables.h"

/**
 * create_node - creates a new hash_node_t
 * Description: creates a new table node and
 * returns a pointer to the new node
 *
 * @key: node key
 * @value: node value
 *
 * Return: new_node, hash_node_t
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - inserts a new hash_node_t int table ADT
 * Description: inserts a new node hash_node_t into hash_table_t,
 * creates a new node from key, value passed and the hashes the
 * key to determine the index or location for storage in the table ADT
 *
 * @key: string key
 * @value: string, value
 * @ht: hash_table_t pointer
 *
 * Return: void
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	ht->array[idx] = add_node(&(ht->array[idx]), key, value);
	if (ht->array[idx] == NULL)
		return (0);
	return (1);
}

/**
 * add_node_end - add node to the end
 * Description: navigates to the end of a list then adds a new node
 *
 * @h: pointer to pointer to list_t head node
 * @key: string for the key member of newly created node
 * @value: string for the value member of newly created node
 *
 * Return: pointer to the added node
 */
hash_node_t *add_node_end(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;

	current_node = *h;
	new_node = create_node(key, value);

	if (!new_node)
		return (NULL);

	if (!current_node)
	{
		current_node = new_node;
		*h = new_node;
		return (new_node);
	}

/* navigate to the end of the list */
	while (current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free_hash_node_t(new_node);
			return (current_node);
		}
		current_node = current_node->next;
	}
/* add newly created node */
	current_node->next = new_node;

	return (new_node);
}

/**
 * add_node - adds a new node to the beginning of a list
 * Description: adds new node at start of list_t
 *
 * @head: pointer to pointer to the head
 * @key: key supplied to initialize the new node
 * @value: value supplied to initialize the new node
 *
 * Return: pointer to the new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;

	new_node = create_node(key, value);
	current_node = *head;

	if (!new_node)
	{
		return (NULL);
	}

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free_hash_node_t(new_node);
			return (current_node);
		}
		current_node = current_node->next;
	}

	new_node->next = *head;

	*head = new_node;
	return (*head);
}

/**
 * free_hash_node_t - frees memory allocated for a hash_node_t
 * Description: free memory allocated for a node
 *
 * @node: pointer to hash_node_t structure
 *
 * Return: void
 */
void free_hash_node_t(hash_node_t *node)
{
	if (node == NULL)
		return;

	free(node->key);
	free(node->value);
	free(node);
}
