#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree, or -1 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * is_avl_helper - Recursively checks if a binary tree is a valid AVL tree.
 * @tree: Pointer to the root node of the tree to check.
 * @min: Minimum allowable value for the node.
 * @max: Maximum allowable value for the node.
 *
 * Return: 1 if tree is a valid AVL tree, 0 otherwise.
 */
int is_avl_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (abs(left_height - right_height) > 1)
		return (0);

	return (is_avl_helper(tree->left, min, tree->n) &&
			is_avl_helper(tree->right, tree->n, max));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL tree.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid AVL tree, 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_avl_helper(tree, INT_MIN, INT_MAX));
}
