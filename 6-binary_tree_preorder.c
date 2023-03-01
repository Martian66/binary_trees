#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *@tree: pointer to the root node of tree
 *@func: pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

		func(tree->n);
		binary_tree_pre_order(tree->left, func);
		binary_tree_pre_order(tree->right, func);

}
