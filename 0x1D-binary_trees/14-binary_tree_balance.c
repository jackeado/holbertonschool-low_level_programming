#include "binary_trees.h"
/**
 * binary_tree_balance - func that measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the balance
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int n_left = 0;
	int n_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		n_left = binary_tree_balance(tree->left);
	else
		n_left = -1;
	if (tree->right)
		n_right = binary_tree_balance(tree->right);
	else
		n_right = -1;

	return (n_left - n_right);
}
