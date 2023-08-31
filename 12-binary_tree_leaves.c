#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: root of tree
 * Return: number of leaves, else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left_leaf = 0, right_leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	leaves = right_leaf + left_leaf;

	return (leaves);
}
