#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: root of tree
 * Return: number of nodes with child, else 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_nodes = 0, left_nodes = 0, right_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == 0)
	{
		return (number_nodes);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	number_nodes = left_nodes + right_nodes;

	return (number_nodes + 1);
}
