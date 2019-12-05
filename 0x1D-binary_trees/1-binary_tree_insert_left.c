#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: the node left
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
		return (NULL);

	node_left = binary_tree_node(parent, value);
	if (node_left == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = node_left;
	}
	else
	{
		node_left->left = parent->left;
		parent->left = node_left;
		node_left->left->parent = node_left;
	}
	return (node_left);
}
