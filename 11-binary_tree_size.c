#include "binary_trees.h"

/**
 * binary_tree_size - mesure the size of a binary trees
 * @tree : the binary tree
 *
 * Return: the size of a binary trees
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
