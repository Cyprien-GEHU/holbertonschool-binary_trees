#include "binary_trees.h"

/**
 * binary_tree_depth - mesure the depth of a binary trees
 * @tree : the binary tree
 *
 * Return: the size of a binary trees
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
