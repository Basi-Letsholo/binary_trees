#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node
 * Return: pointer to uncle node, else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	int parent_value;

	if (node == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	parent_value = node->parent->n;

	if (node->parent->parent->left->n == parent_value)
	{
		uncle = node->parent->parent->right;
	}
	else if (node->parent->parent->right->n == parent_value)
	{
		uncle = node->parent->parent->left;
	}

	return (uncle);
}
