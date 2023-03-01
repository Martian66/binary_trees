#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a node to the left of parent
 *@parent: Parent node
 *@value: Value of the node
 *
 *Return: The new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	old_node = parent->left;
	parent->left = new_node;
	new_node->left = old_node;
	if (old_node != NULL)
	{
		old_node->parent = new_node;
	}
	return (new_node);
}

