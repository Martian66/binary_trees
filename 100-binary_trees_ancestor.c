#include "binary_trees.h"


/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *@first: A pointer to the first node
 *@second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = (binary_tree_t *)first;

	while (ancestor != NULL)
	{
		if (binary_tree_is_ancestor(ancestor, second))
			return (ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}

/**
 *binary_tree_is_ancestor - Checks if a given node is an ancestor of another
 *node
 *@node: A pointer to the node that may be the ancestor
 *@target: A pointer to the node that may be the descendant
 *
 * Return: 1 if @node is an ancestor of @target, 0 otherwise
 */

int binary_tree_is_ancestor(const binary_tree_t *node,
			const binary_tree_t *target)
{
	if (node == NULL)
		return (0);

	if (node == target)
		return (1);

	return (binary_tree_is_ancestor(node->left, target) ||
			binary_tree_is_ancestor(node->right, target));
}
