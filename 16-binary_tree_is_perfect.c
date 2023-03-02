#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: a pointer to the root node of the tree
 *
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	return ((tree->left == NULL && tree->right == NULL) ||
			(binary_tree_is_perfect(tree->left) &&
			 binary_tree_is_perfect(tree->right)));
}
