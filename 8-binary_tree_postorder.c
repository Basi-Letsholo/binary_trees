#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses binary tree with post-order traversal
 * @tree: binary tree
 * @func: pointer to function called on node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
