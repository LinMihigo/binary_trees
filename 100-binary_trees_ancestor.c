#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: Pointer to the first node.
* @second: Pointer to the second node.
* Return: Pointer to lowest common ancestor or NULL, if failure
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *ancestor1, *ancestor2;

	if (!first || !second)
		return (NULL);

	ancestor1 = (binary_tree_t *)first;
	ancestor2 = (binary_tree_t *)second;

	while (ancestor1)
	{
		ancestor2 = (binary_tree_t *)second;
		while (ancestor2)
		{
			if (ancestor1 == ancestor2)
				return (ancestor1);
			ancestor2 = ancestor2->parent;
		}
		ancestor1 = ancestor1->parent;
	}
	return (NULL);
}
