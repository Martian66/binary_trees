#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node
 *
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(right->right);
		leaf = left + right;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}
}
