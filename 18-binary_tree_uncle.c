#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if the input node is NULL */
	if (node == NULL)
		return (NULL);

	/* Check if the node has a parent */
	if (node->parent == NULL)
		return (NULL);

	/* Check if the parent has a grandparent */
	if (node->parent->parent == NULL)
		return (NULL);

	/* Determine the uncle based on the parent's position */
	if (node->parent->parent->left != NULL && node->parent->parent->right != NULL)
	{
		/* Both left and right children of the grandparent exist */
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}

	/* If one child (either left or right) of the grandparent is NULL */
	return (NULL);
}
