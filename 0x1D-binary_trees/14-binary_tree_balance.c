#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: integer
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_n = 0;
    size_t right_n = 0;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
        left_n = binary_tree_height(tree->left) + 1;
    if (tree->right != NULL)
        right_n = binary_tree_height(tree->right) + 1;

    if (right_n > left_n)
        return (right_n);
    else
        return (left_n);
}

/**
 * binary_tree_balance - func that measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the balance
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int n_left;
	int n_right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		n_left = binary_tree_height(tree->left);
	else
		n_left = -1;
	if (tree->right)
		n_right = binary_tree_height(tree->right);
	else
		n_right = -1;

	return (n_left - n_right);
}
