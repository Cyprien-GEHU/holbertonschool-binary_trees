#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer root node of the tree.
 *
 * Return: the height or 0 if tree is NULL.
 */

size_t  binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if its perfect else 0.
 */

int	binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (left == NULL && right == NULL)
		return (1);
	if (binary_tree_height(left) != binary_tree_height(right))
		return (0);
	return (binary_tree_is_perfect(left) && binary_tree_is_perfect(right));
}
