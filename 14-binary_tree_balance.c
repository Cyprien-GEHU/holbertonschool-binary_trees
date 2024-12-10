#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer root node of the tree.
 *
 * Return: the height or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	return (left_height - right_height);
}
