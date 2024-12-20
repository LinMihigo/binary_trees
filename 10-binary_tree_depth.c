#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: Pointer to the root node of the tree to measure the depth
* Return: The depth of the tree, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
