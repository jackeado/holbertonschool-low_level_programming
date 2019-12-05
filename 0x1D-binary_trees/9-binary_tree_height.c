#include "binary_trees.h"
#include <stdlib.h>
/**
 * function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: integer
 */


size_t binary_tree_height(const binary_tree_t *tree) {
    size_t left_n = 0;
    size_t right_n = 0;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
        left_n = binary_tree_height(tree->left) + 1;
    if (tree->right != NULL)
        right_n = binary_tree_height(tree->right) + 1;

    if (right_n > left_n)
        return(right_n);
    else
        return(left_n);
}
