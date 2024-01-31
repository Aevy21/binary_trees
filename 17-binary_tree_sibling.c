#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the input node is NULL */
	if (node == NULL)
		return (NULL);

	/* Check if the parent is NULL */
	if (node->parent == NULL)
		return (NULL);

	/* Determine the sibling */
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		/* Both left and right children exist, determine the sibling */
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}

	/* If one child (either left or right) is NULL, there is no sibling */
	return (NULL);
}

