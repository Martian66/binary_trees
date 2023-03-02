#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree
 *
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_count = binary_tree_nodes(tree->left);
	size_t right_count = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left_count + right_count + 1);
	else
		return (left_count + right_count);
}
