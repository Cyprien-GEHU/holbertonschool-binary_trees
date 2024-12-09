#include "binary_trees.h"

/**
 * binary_tree_postorder - display all node on post order
 * @tree : the binary tree
 * @func : the function
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

	}
}
