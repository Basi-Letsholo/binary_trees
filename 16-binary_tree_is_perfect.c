#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root of tree
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, full = 0;

	if (tree == NULL)
	{
		return (0);
	}

	full = tree_is_full(tree);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height == right_height && full == 1)
	{
		return (1);
	}

	return (0);
}

/**
 * tree_is_full - checks if a binary tree is full
 * @tree: root of tree
 * Return: 1 if full, else 0
 */

int tree_is_full(const binary_tree_t *tree)
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
		left_full = tree_is_full(tree->left);
		right_full = tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
		{
			full = 1;
		}
	}

	return (full);
}

/**
 * tree_height - measures height of binary tree
 * @tree: root of tree
 * Return: height, else 0
 */

size_t tree_height(const binary_tree_t *tree)
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

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	height = max_h(left_height, right_height) + 1;

	return (height);
}

/**
 * max_h - returns the max height between the heights given
 * @a: height 1
 * @b: height 2
 * Return: max
 */

size_t max_h(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}

	return (b);
}
