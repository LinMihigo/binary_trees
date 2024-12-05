#include "binary_trees.h"

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node of the tree to check
* Return: 1 if tree is complete, 0 if not
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t **queue, *current;
	size_t front = 0, rear = 0;
	bool has_null = false;

	if (!tree)
		return (0);

	queue = malloc(1024 * sizeof(*queue));
	if (!queue)
		return (0);

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];

		if (current)
		{
			if (has_null)
			{
				free(queue);
				return (0);
			}
			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
		else
		{
			has_null = true;
		}
	}
	free(queue);
	return (1);
}
