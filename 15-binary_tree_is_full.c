#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, it is considered full */
	if (tree == NULL)
		return (0);

	/* If both left and right subtrees are NULL, it is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If either subtree is NULL (but not both), it is not full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recursively check the left and right subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

