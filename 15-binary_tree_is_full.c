#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root of tree
 * Return: 1 if full, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0, left_full = 0, right_full = 0;
	
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
		{
			full = 1;
		}
	}

	return (full);
}
