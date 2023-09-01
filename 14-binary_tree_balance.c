#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root of tree
 * Return: balance factor, else 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance = left_height - right_height;

	return (balance);
}

