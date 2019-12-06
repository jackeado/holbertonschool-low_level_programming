#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: Pointer of node of the tree to count the number of leaves
 * Return: Null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	else
		count = 1;
	return (count);
}
