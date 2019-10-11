#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tb = NULL;
	hash_node_t **array = NULL;

	new_tb = malloc(sizeof(hash_table_t));
	if (new_tb == NULL)
	{
		return (NULL);
	}
	new_tb->size = size;
	array = calloc(size, sizeof(hash_node_t));

	if (array == NULL)
	{
		return (NULL);
	}
	new_tb->array = array;
	return (new_tb);
}
