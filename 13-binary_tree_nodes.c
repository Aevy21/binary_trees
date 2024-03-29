#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes with at least 1 child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_nodes = binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + left_nodes + right_nodes);

	return (0);
}

