#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
* Return: The height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_level - Calls func on each node at a specific level
* @tree: Pointer to the root node of the tree
* @func: Pointer to a function to call for each node
* @level: Current level to process
*/
void binary_tree_level(const binary_tree_t *tree, void (*func)(int),
size_t level)
{
	if (!tree || !func)
		return;

	if (level == 1)
	{
		func(tree->n);
	}
	else
	{
		binary_tree_level(tree->left, func, level - 1);
		binary_tree_level(tree->right, func, level - 1);
	}
}

/**
* binary_tree_levelorder - Traverses a binary tree using level-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (level = 1; level <= height; level++)
		binary_tree_level(tree, func, level);
}
