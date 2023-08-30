#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: root of tree
 * Return: height, else 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (height);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height = max_height(left_height, right_height) + 1;

	return (height);
}

/**
 * max_height - returns the max height between the heights given
 * @a: height 1
 * @b: height 2
 * Return: max
 */

size_t max_height(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}

	return (b);
}
