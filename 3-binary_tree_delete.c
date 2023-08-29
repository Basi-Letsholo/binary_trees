#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_del_repeat(tree);
	tree = NULL;
}


/**
 * binary_tree_del_repeat - recursively deletes nodes
 * @current_node: current node
 */

void binary_tree_del_repeat(binary_tree_t *current_node)
{
	if (current_node == NULL)
	{
		return;
	}

	binary_tree_del_repeat(current_node->left);
	binary_tree_del_repeat(current_node->right);

	free(current_node);
}
