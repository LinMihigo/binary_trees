#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a Binary Search Tree.
 * @tree: Double pointer to the root node of the BST.
 * @value: The value to insert into the BST.
 *
 * Return: Pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	if (!tree)
		return (NULL);

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left)
		{
			return (bst_insert(&((*tree)->left), value));
		}
		else
		{
			new_node = binary_tree_node(*tree, value);
			if (new_node)
				(*tree)->left = new_node;
			return (new_node);
		}
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right)
		{
			return (bst_insert(&((*tree)->right), value));
		}
		else
		{
			new_node = binary_tree_node(*tree, value);
			if (new_node)
				(*tree)->right = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
