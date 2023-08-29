#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts left-child node
 * @parent: parent node
 * @value: value for new node
 * Return: pointer to new node, else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int temp_value;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		temp_value = parent->left->n;
		parent->left->n = value;
		parent->left->left = binary_tree_node(parent->left, temp_value);
	}
	else
	{
		parent->left = binary_tree_node(parent, value);
	}

	return (parent->left);
}
