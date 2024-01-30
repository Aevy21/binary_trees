#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs preorder traversal on a binary tree
 *
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to a function that takes an int argument
 */
void binary_tree_preorder(const struct binary_tree_s *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Process the current node (root) */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
