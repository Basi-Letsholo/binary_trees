#include "binary_trees.h"
/**
 * binary_tree_size - measures size of binary tree
 * @tree: points to root of tree
 * Return: size of tree, else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1, left_size, right_size;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size += left_size + right_size;

	return (size);
}
