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
	binary_tree_t *new_right = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_right == NULL)
		return (NULL);

	new_right->n = value;
	if (parent->right != NULL)
	{
		parent->right->parent = new_right;
		new_right->right = parent->right;
	}
	parent->right = new_right;
	new_right->parent = parent;
	new_right->left = NULL;

	return (new_right);
}
