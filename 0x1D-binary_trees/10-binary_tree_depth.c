#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: Integer
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t contador = -1;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		contador++;
		tree = tree->parent;
	}
	return (contador);
}
