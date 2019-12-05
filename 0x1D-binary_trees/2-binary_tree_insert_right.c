#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function inserts a node as the right-child of another node
 * @parent pointer to the node to insert the right-child in
 * @value the value to store in the new node
 * @return the right node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
		return(NULL);

	node_right = binary_tree_node(parent, value);
	if(node_right == NULL)
		return(NULL);
	node_right->right = parent->right;
	if(node_right->right != NULL)
		node_right->right->parent = node_right;
	parent->right = node_right;
	return(node_right);
}
