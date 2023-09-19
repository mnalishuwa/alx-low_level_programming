#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Create hash table */
hash_table_t *hash_table_create(unsigned long int size);
/* Djb2 Hash Function */
unsigned long int hash_djb2(const unsigned char *str);
/* Get index for key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* create node */
hash_node_t *create_node(const char *key, const char *value);
/* add node to hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *add_node_end(hash_node_t **h, const char *key, const char *value);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
void free_hash_node_t(hash_node_t *node);
/* Search hash table */
char *hash_table_get(const hash_table_t *ht, const char *key);
/* print hash table */
void hash_table_print(const hash_table_t *ht);
/* print linked list */
size_t print_list(const hash_node_t *h);
/* free list */
void free_list(hash_node_t *head);
/* delete hash table */
void hash_table_delete(hash_table_t *ht);

#endif
