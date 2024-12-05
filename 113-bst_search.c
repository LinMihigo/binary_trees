#include "binary_trees.h"

/**
* bst_search - Searches for a value in a BST
* @tree: Pointer to the root node of the BST to search
* @value: The value to search for in the BST
* Return: Pointer to the node containing the value, or NULL if not found
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
