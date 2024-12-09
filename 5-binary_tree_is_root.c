#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node we point are a root or not
 * @node : the node we point
 *
 * Return: "1" if is a root and "0" in another case
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL &&  node->parent == NULL)
		return (1);

	return (0);
}
