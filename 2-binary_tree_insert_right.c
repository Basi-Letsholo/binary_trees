#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts right-child node
 * @parent: parent node
 * @value: value for new node
 * Return: pointer to created node, else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int temp_value;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		temp_value = parent->right->n;
		parent->right->n = value;
		parent->right->right = binary_tree_node(parent->right, temp_value);
	}
	else
	{
		parent->right = binary_tree_node(parent, value);
	}

	return (parent->right);
}
