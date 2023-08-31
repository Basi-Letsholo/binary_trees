#include "binary_trees.h"
/**
 * binary_tree_sibling - finds siling of a node
 * @node: node
 * Return: pointer to sibling node, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;
	int node_value;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	node_value = node->n;

	if (node->parent->left->n == node_value)
	{
		if (node->parent->right != NULL)
		{
			sibling = node->parent->right;
		}
	}
	else if (node->parent->right->n == node_value)
	{
		if (node->parent->left != NULL)
		{
			sibling = node->parent->left;
		}
	}

	return (sibling);
}
