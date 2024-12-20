#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node on the right of the binary tree
 * @parent : parent of node
 * @value : the value of the node
 *
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = new_right;
		new_right->right = parent->right;
	}
	parent->right = new_right;

	return (new_right);
}
