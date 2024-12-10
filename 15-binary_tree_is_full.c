#include "binary_trees.h"

/**
 * binary_tree_is_full - check a node if is full
 * @tree : the binary tree
 *
 * Return: 0 is not full and 1 is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	return (0);
}
