#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of tree from current node
 * @tree: binary tree at current node
 * Return: depth, else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 1;
	binary_tree_t *current_node;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	current_node = tree->parent;
	while (current_node->parent != NULL)
	{
		depth += 1;
		current_node = current_node->parent;
	}

	return (depth);
}
